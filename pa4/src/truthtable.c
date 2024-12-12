#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef enum {AND, OR, NAND, NOR, XOR, NOT, PASS, DECODER, MULTIPLEXER, NONE} type_t;
typedef enum {DNE, NEW, OK} ret_t;
char *types[17] = {"AND","OR","NAND","NOR","XOR","NOT","PASS","DECODER","MULTIPLEXER","NONE"};

typedef struct gate_t {
    type_t type;
    int numInputs;
    int numOutputs;
    int numSelectors;
    int *inputs;
    int *outputs;
    struct gate_t *next;
} gate;

typedef struct circuit_t {
    int numInputs;
    int numOutputs;
    int numVariables;
    int numGates;
    char *outputs;
    char *inputs;
    char *variables;
    int *indexes;
    gate *head;
} circuit;

type_t strtoenum (char type[17]){
    for (int i = 0; i < 9; i++) {
        if (strcmp(type,types[i])==0) { return i; }
    }
    return NONE;
}

int L_AND(int x, int y)   { return x & y; }
int L_OR(int x, int y)    { return x | y; }
int L_NAND(int x, int y)  { return !(x & y); }
int L_XOR(int x, int y)   { return (x & ~y) | (~x & y); }
int L_NOT(int x)          { return !x; }
int L_NOR(int x, int y)   { return !(x | y); }

int L_DECODER(int n, int *i) {
    int x = 0;
    for (int j = n - 1; j >= 0; j--)
        x += pow(2, n-j-1)*i[j];
    return x;
}

int L_MULTIPLEXER(int n, int *i){
    int nSqr = log2(n);
    int s = 0;
    for (int j = 0; j < nSqr; j++)
        s += i[n+j] * pow(2, nSqr-j-1);
    return i[s];
}

int * itob(int bits, int i){
    int n = pow(2,bits);
    int *b = malloc(sizeof(int)*n);

    for (int j = 0; j < n; j++) { b[j] = 0; } 
    for (int j = 0; i > 0 ; j++, i /= 2) { b[j] = i%2; }

    return b;
}

void push(circuit **circ, gate **head, char type[17], int numInputs, int numOutputs, int *inputs, int *outputs){
    gate *new = malloc(sizeof(gate));
    new->numInputs = numInputs;
    new->numOutputs = numOutputs;
    new->inputs = inputs;
    new->outputs = outputs;
    new->type = strtoenum(type);
    new->next = NULL;

    if (new->type == MULTIPLEXER){ 
        new->numSelectors = log2(numInputs);
        new->numInputs += new -> numSelectors;
    } else new->numSelectors = 0;

    if (*head == NULL){
        (*head) = new;
    } else {
        gate *tmp = *head;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = new;
    }
    (*circ)->numGates++;
}

void freeGates(gate **g){
    if (*g == NULL) return;
    freeGates(&((*g)->next));
    free((*g) -> inputs);
    free((*g) -> outputs);
    free(*g);
}

void newVar(circuit **circ, char *k){
    (*circ) -> variables = realloc((*circ)->variables, ((*circ)->numVariables+1)*17*sizeof(int));
    (*circ) -> indexes = realloc((*circ)->indexes, ((*circ)->numVariables+1)*sizeof(int));

    sprintf((*circ) -> variables + ((*circ)->numVariables)*17,"%s",k);
    (*circ) -> indexes[(*circ)->numVariables] = (*circ) -> numVariables;

    (*circ) -> numVariables++;
}

int computeGate(gate *g, int *i){
    switch(g -> type){
        case AND:           return L_AND(i[0], i[1]);
        case OR:            return L_OR(i[0], i[1]);
        case NAND:          return L_NAND(i[0], i[1]);
        case NOR:           return L_NOR(i[0], i[1]);
        case XOR:           return L_XOR(i[0], i[1]);
        case NOT:           return L_NOT(i[0]);
        case PASS:          return i[0];
        case DECODER:       return L_DECODER(g->numInputs, i);
        case MULTIPLEXER:   return L_MULTIPLEXER(g->numInputs - g->numSelectors, i);
        default:            printf("Invalid Gate: %d=%s\n", g->type, types[g->type]); return 0;
    }
}

int returnVar(circuit *circ, char *k){
    if (strcmp(k, "0") == 0) return 0;
    if (strcmp(k, "1") == 0) return 1;

    for (int i = 0; i < circ->numVariables; i++)
        if (strcmp(circ->variables + (i*17), k) == 0)
            return i;
    return -1;
}

void computeCirc(circuit *c, int n, int **input){
    int numVars = c->numVariables;

    int *memVarMap = malloc(numVars*sizeof(int));
    memVarMap[0] = 0, memVarMap[1] = 1;

    for (int i = 2; i < n+2; i++) memVarMap[i] = (*input)[n-i+1];
    for (int i = 2; i < n+2; i++) printf("%d ",memVarMap[i]);

    printf("|");

    for (gate *tmp = c->head; tmp != NULL; tmp = tmp->next){
        int *inputs = malloc(tmp->numInputs*sizeof(int));
        for (int i = 0; i < tmp->numInputs; i++){
            inputs[i] = memVarMap[tmp->inputs[i]];
        }

        int output = computeGate(tmp, inputs);
        if (tmp->type == DECODER){
            for (int i = 0; i < tmp->numOutputs; i++){
                memVarMap[tmp->outputs[i]] = (i == output);
            }
        } else {
            memVarMap[tmp->outputs[0]] = output;
        }
        free(inputs);
    }
    for (int i = 0; i < c->numOutputs; i++){
        printf(" %d",memVarMap[c->numInputs+i+2]);
    }
    printf("\n");
    free(memVarMap);
}

void truthtable(circuit *c){
    int bits = pow(2, c->numInputs);
    int *input = malloc(sizeof(int)*bits);
    for (int i = 0; i < c->numInputs; i++) {
        input[i] = 0;
    }
    for (int i = 0; i < bits; i++){
        computeCirc(c, c->numInputs, &input);
        for (int i = 0; i < bits; i++){
            input[i] = !input[i];
            if (input[i]==1) break;
        }
    }
    free(input);
}

int main(int argc, char *argv[]) {
    FILE* file = fopen(argv[1],"r");
    circuit *circ = malloc(sizeof(circuit));
    circ -> numVariables = 2;
    circ -> numGates = 1;
    circ -> head = NULL;

    fscanf(file, "INPUT %d", &circ->numInputs);
    circ -> inputs = malloc((circ->numInputs)*sizeof(char)*17);

    circ -> variables = malloc(17*circ->numInputs*sizeof(char));
    circ -> indexes = malloc(circ->numInputs*sizeof(int));

    for (int i = 0; i < 2; i++){
        sprintf(circ->variables+(i*17), "%d", i);
        circ->indexes[i] = i;
    }

    for (int i = 0; i < circ->numInputs; i++){
        fscanf(file, "%s ", circ->inputs+(17*i));
        newVar(&circ, circ->inputs+(17*i));
    }

    fscanf(file, "OUTPUT %d", &circ -> numOutputs);
    circ->outputs = malloc(17*circ -> numOutputs*sizeof(char));
    for (int i = 0; i < circ->numOutputs; i++){
        fscanf(file, "%s ", circ->outputs+(17*i));
        newVar(&circ, circ->outputs+(17*i));
    }

    char game[17];
    while (fscanf(file, "%16s", game) != EOF) {
        int in = 0;
        int out = 1;
        int sel = 0;

        if (strcmp(game,"MULTIPLEXER") == 0 || strcmp(game,"DECODER")==0){
            fscanf(file, "%d", &in);
            if (strcmp(game,"DECODER") == 0) out = pow(2,in);
            else {
                sel = in, in = pow(2,in);
            }
        } else if (strcmp(game,"PASS") == 0 || strcmp(game,"NOT")==0){
                in = 1;
            } else {
                in = 2;
        }

        int *inputs = malloc((in+sel)*sizeof(int));
        int *outputs = malloc(out*sizeof(int));

        for (int i = 0; i < in+out+sel; i++, out=out){
            char var[17] = "";
            fscanf(file, "%s", var);
            int vi = returnVar(circ, var);

            if (i < in+sel) {
                inputs[i] = (vi == -1) ? circ->numVariables : vi;
            }
            else {
                outputs[i-in-sel] = (vi == -1) ? circ->numVariables : vi;
            }
            if (vi == -1){
                newVar(&circ, var);
            }
        }
        push(&circ, &(circ->head), game, in, out, inputs, outputs);
    }
    truthtable(circ);

    free(circ->inputs);
    free(circ->outputs);
    free(circ->indexes);
    free(circ->variables);
    freeGates(&circ->head);
    free(circ);
    return 0;
};