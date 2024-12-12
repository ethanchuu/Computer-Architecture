#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int value;
    struct Node *next;
};

struct Node *createNode(int newVal) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->value = newVal;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct Node **head, int v) {
    struct Node *newNode = createNode(v);
    struct Node *temp;

    if (*head == NULL || (*head)->value > newNode->value) {
        newNode->next = *head;
        *head = newNode;
    } else {
        temp = *head;
        while (temp->next != NULL && temp->next->value < newNode->value) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

bool isExist(struct Node *head, int v) {
    struct Node *temp = head;
    while (temp != NULL) {
        if (temp->value == v) return true;
        temp = temp->next;
    }
    return false;
}

void delNode(struct Node **head, int v) {
    struct Node *temp = *head;
    struct Node *prev = NULL;

    if (temp == NULL) return;

    if (temp != NULL && temp->value == v) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->value != v) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
    free(temp);
}

int getLength(struct Node *head) {
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void printList(struct Node *head) {
    struct Node *temp = head;
    printf("%d :", getLength(head));

    while (temp != NULL) {
        printf(" %d", temp->value);
        temp = temp->next;
    }
}

void freeList(struct Node *head) {
    struct Node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(int argc, char *argv[]) {
    char op;
    int val;
    struct Node *head = NULL;

    if (argc < 2) {
        while (scanf(" %c", &op) == 1) {
            if (op == 'i') {
                scanf("%d", &val);
                if (!isExist(head, val))
                    insertNode(&head, val);
                printList(head);
            } else if (op == 'd') {
                scanf("%d", &val);
                delNode(&head, val);
                printList(head);
            } else {
                continue; // error
            }
            printf("\n");
        }
        freeList(head);
        return 0;
    }

    if (argc == 2) {
        char *filename = argv[1];
        FILE *fp = fopen(filename, "r");
        if (fp == NULL) {
            exit(1); // error
        }
        while (fscanf(fp, " %c", &op) == 1) {
            if (op == 'i') {
                fscanf(fp, "%d", &val);
                if (!isExist(head, val))
                    insertNode(&head, val);
                printList(head);
            } else if (op == 'd') {
                fscanf(fp, "%d", &val);
                delNode(&head, val);
                printList(head);
            } else {
                continue; // error
            }
            printf("\n");
        }
        fclose(fp);
        freeList(head);
        return 0;
    }
    return 0;
}