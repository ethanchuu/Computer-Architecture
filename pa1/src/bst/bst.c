#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int data) {
    if (root == NULL) {
        printf("inserted\n");
        return createNode(data);
    } 
    if (data == root->data) {
        printf("not inserted\n");
    } else if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

void search(Node* root, int data) {
    if (root == NULL) {
        printf("absent\n");
        return;
    }
    if (root->data == data) {
        printf("present\n");
    } else if (data < root->data) {
        search(root->left, data);
    } else {
        search(root->right, data);
    }
}

void printTree(Node* root) {
    if (root == NULL) {
        return;
    }
    printf("(");
    printTree(root->left);
    printf("%d", root->data);
    printTree(root->right);
    printf(")");
}

Node* findMin(Node* node) {
    while (node && node->left != NULL) {
        node = node->left;
    }
    return node;
}

Node* delete(Node* root, int data, int* deleted_once) {
    if (root == NULL) {
        printf("absent\n");
        return NULL;
    }

    if (data < root->data) {
        root->left = delete(root->left, data, deleted_once);
    } else if (data > root->data) {
        root->right = delete(root->right, data, deleted_once);
    } else {
        if (*deleted_once == 0) {
            printf("deleted\n");
            *deleted_once = 1;
        }

        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        } 
        if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data, deleted_once);
    }
    return root;
}

void freeTree(Node* root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    Node* root = NULL;
    char command;
    int data;
    int deleted_once = 0;
    int exit_code = 0;

    while (scanf(" %c", &command) != EOF) {
        switch (command) {
            case 'i':
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 's':
                scanf("%d", &data);
                search(root, data);
                break;
            case 'p':
                printTree(root);
                printf("\n");
                break;
            case 'd':
                scanf("%d", &data);
                root = delete(root, data, &deleted_once);
                deleted_once = 0;
                break;
            default:
                exit_code = 1;
                break;
        }
    }
    freeTree(root);
    return exit_code;
}