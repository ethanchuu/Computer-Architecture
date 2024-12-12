#include<stdio.h>
#include<string.h>

void swap(char **a, char **b) {
    char *tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(int argc, char *argv[]) {
    int i, j;
    for (i = 1; i < argc; i++) {
        for (j = i + 1; j < argc; j++) {
            if (strcmp(argv[i], argv[j]) > 0) {
                swap(&argv[i], &argv[j]);
            }
        }
    }
    for (i = 1; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}