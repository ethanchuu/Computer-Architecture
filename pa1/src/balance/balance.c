#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void push(char stack[], char element, int *top) {
    stack[*top] = element;
    (*top)++;
}

char pop(char stack[], int *top) {
    if (*top == 0) {
        return '\0';
    }
    (*top)--;
    return stack[*top];
}

char peek(const char stack[], int top) {
    return stack[top - 1];
}

int isMatchingPair(char closing, char opening) {
    return (closing == ')' && opening == '(') ||
           (closing == '}' && opening == '{') ||
           (closing == ']' && opening == '[');
}

char getClosingDelimiter(char opening) {
    switch (opening) {
        case '(': return ')';
        case '{': return '}';
        case '[': return ']';
        default:
            exit(EXIT_FAILURE);
    }
}

int checkBalance(const char *input) {
    int length = strlen(input);
    
    char *stack = (char *)malloc(length * sizeof(char));
    if (!stack) {
        return EXIT_FAILURE;
    }

    int stackTop = 0;

    for (int i = 0; input[i] != '\0'; i++) {
        char currentChar = input[i];

        if (currentChar == '(' || currentChar == '{' || currentChar == '[') {
            push(stack, currentChar, &stackTop);
        } else if (currentChar == ')' || currentChar == '}' || currentChar == ']') {
            if (stackTop == 0) {
                printf("%d: %c\n", i, currentChar);
                free(stack);
                return EXIT_FAILURE;
            }

            char popped = pop(stack, &stackTop);
            if (!isMatchingPair(currentChar, popped)) {
                printf("%d: %c\n", i, currentChar);
                free(stack);
                return EXIT_FAILURE;
            }
        }
    }

    if (stackTop == 0) {
        free(stack);
        return EXIT_SUCCESS;
    }

    printf("open: ");
    while (stackTop > 0) {
        char topElement = pop(stack, &stackTop);
        printf("%c", getClosingDelimiter(topElement));
    }
    printf("\n");

    free(stack);
    return EXIT_FAILURE;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        return EXIT_FAILURE;
    }

    return checkBalance(argv[1]);
}