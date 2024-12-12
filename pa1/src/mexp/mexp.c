#include <stdio.h>
#include <stdlib.h>

void freeMatrix(int **matrix, int n) {
    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

void printMatrix(int **matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", matrix[i][j]);
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(int argc, char *argv[]) {
    FILE *fptr = fopen(argv[1], "r");
    if ((fptr == NULL) || (argc != 2)) {
        return EXIT_FAILURE;
    }

    int n;
    fscanf(fptr, "%d", &n);

    int **M_var = malloc(n * sizeof(int *));
    int **M_var1 = malloc(n * sizeof(int *));
    int **res = malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++) {
        M_var[i] = malloc(n * sizeof(int));
        M_var1[i] = malloc(n * sizeof(int));
        res[i] = malloc(n * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(fptr, "%d", &M_var[i][j]);
            M_var1[i][j] = M_var[i][j];
        }
    }

    int exp_var;
    fscanf(fptr, "%d", &exp_var);

    if (exp_var == 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", (i == j) ? 1 : 0);
            }
            printf("\n");
        }
    } else if (exp_var == 1) {
        printMatrix(M_var, n);
    } else {
        for (int m = 0; m < exp_var - 1; m++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    res[i][j] = 0;
                    for (int k = 0; k < n; k++) {
                        res[i][j] += M_var1[i][k] * M_var[k][j];
                    }
                }
            }

            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    M_var1[i][j] = res[i][j];
                }
            }
        }
        printMatrix(res, n);
    }

    freeMatrix(M_var, n);
    freeMatrix(M_var1, n);
    freeMatrix(res, n);

    fclose(fptr);
    return EXIT_SUCCESS;
}
