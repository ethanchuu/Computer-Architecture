/*
	Skeleton:
		Matrices:
			- Multiply
			- Divide
			- Subtract
			- Invert
			- Transpose
		Free Memory
		Main()
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Multiply two given matrices and return Product matrice
double ** multiply (double** A, double** B, int rowsA, int columnsA, int rowsB, int columnsB){
	double total=0;
	if (columnsA != rowsB) return NULL; // cannot multiply

	// Dynamic Memory Allocation
	double ** product = (double **)malloc(sizeof(double *) * rowsA);
	if (!product) return NULL;
	int i;
	for (i =0; i<rowsA; i++) {
		product[i] = (double *)malloc(sizeof(double)* columnsB);
		if (!product[i]) return NULL;
	}

	// Take dot product of each row of the first matrix with each column of the second matrix
	int y, p, x;
	for (y=0; y< rowsA; y++) {
		for (p=0; p< columnsB; p++) {
			for (x=0; x< columnsA; x++)	{
				total = total + A[y][x] * B[x][p];
			}
			product[y][p] = total;
			total = 0;
		}
	}
	return product;
}

// Divide rows of Matrix by a given factor
void divideRow (double ** matrix, int row, double factor, int columns) {
	if (matrix == NULL) return;

	for (int i = 0; i < columns; i++) {
		matrix[row][i] = matrix[row][i] / factor;
	}
}
 
// Subtract with Gaussian Elimination (multiplier*RowA - RowB)
void subtractRow (double ** matrix, int A, int B, double multiplier, int columns){
	if (matrix==NULL) return;
	for (int i = 0; i < columns; i++) {
		matrix[B][i] = (matrix[B][i] - (multiplier * matrix[A][i]));
	}
}

// Invert given N*N Matrix
double ** invert (double ** matrix, int row, int column){
	if (row!=column) return NULL; // Not square matrix
	if (matrix==NULL) return NULL; // Empty

	// Dynamic Memory Allocation : Rather consider dimension of inverse
	double ** inverse = (double **)malloc(sizeof(double *)* row);
	if (!inverse) return NULL;

	for(int i = 0; i < row; i++) {
		inverse[i] = (double *)malloc(sizeof(double) * column);
		if (!inverse[i]) return NULL;
	}

	// Identity Matrix Calc.
	for (int i=0; i < row; i++) {
		for (int j = 0; j < row; j++) {
			if (i == j) {
				inverse[i][j]=1;
			}else {
				inverse[i][j]=0;
			}
		}
	}

	double divider=1, subtractor=1;
	
	for (int i = 0; i < row; i++) {
		// Divide row to start with 1
		divider = matrix[i][i];
		divideRow(matrix, i, divider, row);
		divideRow(inverse, i, divider, row);
		
		// Subtract row from rows beneathe, consider factor j,i
		for (int j = i+1; j < row; j++) {
			subtractor = matrix[j][i];
			subtractRow(matrix, i, j, subtractor, row);
			subtractRow(inverse, i, j, subtractor, row);
		}
	}

	// Inverse Matrix
	for (int i = row-1; i > 0; i--) {
		for (int j = i-1; j >= 0; j--) {
			subtractor = matrix[j][i];
			subtractRow(matrix, i, j, subtractor, row);
			subtractRow(inverse, i, j, subtractor, row);
		}
	}
	return inverse;
}

// Transpose Matrix (considering malloc memory)
double ** transpose (double** matrix, int rows, int columns){
	if (!matrix) return NULL;

	// Memory Allocation
	double ** result = (double **)malloc(sizeof(double *) * columns);
	if (!result) return NULL;
	for (int i = 0; i < columns; i++) {
		result[i] = (double *)malloc(sizeof(double) * rows);
		if (!result[i]) { return NULL; }
	}

	// Transpose
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			result[j][i] = matrix [i][j];
		}
	}
	return result;
}

// Free Memory : matrix pointers
void freeMatrix (double ** matrix, int row){
	if (matrix==NULL) { return; }

	// Free inner row pointers
	for (int i = 0; i < row; i++) {
		free(matrix[i]);
	}
	// Free outer array pointer
	free(matrix);
	return;
}

int main (int argc, char** argv) {

	// Input
	int size1, size2 =0;
	if (argc!=3 && !argv[2]) return 1;
	for (size1 = 0; argv[1][size1] != '\0'; size1++) {}; size1++;
	for (size2 = 0; argv[2][size2] != '\0'; size2++) {}; size2++;

	char * file1 = (char *)malloc(sizeof(char) * size1);
	if (!file1) { return 1; }
	strcpy(file1, argv[1]);

	char * file2 = (char *)malloc(sizeof(char) * size2);
	if (!file2) { return 1; }
	strcpy(file2, argv[2]);
	
	// Train
	FILE * fp;
	fp = fopen(file1, "r");
	if (!fp) return 1;

	char * type = (char *)malloc(sizeof(char)* 6);
	if (!type) return 1;
	if (fscanf(fp, "%s ", type) != 1) return 1;
	type[5] = '\0';
	free(type);
	free(file1);

	int r1, col1;

	// R
	if (fscanf(fp, "%d %d", &col1, &r1) !=2) return 1;
	col1++;

	// Allocate X, Y
	int i, j;
	double ** X = (double **)malloc(sizeof(double *) * r1);
	double ** Y = (double **)malloc(sizeof(double *) * r1);
	if (!X || !Y) return 1;
	for (i=0; i<r1; i++) {
		X[i] = (double *)malloc(sizeof(double) * col1);
		Y[i] = (double *)malloc(sizeof(double));
		if (!X[i] || !Y[i])return 1;
	}
	int valid=0;

	// Input
	for (i=0; i<r1; i++)  {
		for (j=0; j<col1+1; j++) {
			if (j==0) {
				X[i][j] = 1.0;
			}else if (j==col1) {
				valid = fscanf(fp, "%lf ", &Y[i][0]);
				if (valid!=1) return 1;
			} else {
				valid = fscanf(fp, " %lf", &X[i][j]);
				if (valid!=1) return 1;
			}
		}
	}

	// W = (X^T * X)^-1 * X^T * Y ?
	double ** transposed = transpose(X, r1, col1);
	if (transposed==NULL) return 1;

	double ** product = multiply(transposed, X, col1, r1, r1, col1);
	if (product == NULL) return 1;
	freeMatrix(X, r1);

	double ** inverse = invert (product, col1, col1);
	if (inverse == NULL) return 1;

	freeMatrix(product, col1);

	double ** product2 = multiply(inverse, transposed, col1, col1, col1, r1);
	if (product2==NULL) return 1;

	freeMatrix(transposed, col1);
	freeMatrix(inverse, col1);

	double ** W = multiply(product2, Y, col1, r1, r1, 1);
	if (W==NULL) return 1;

	freeMatrix(Y, r1);
	freeMatrix(product2, col1);

	fclose(fp);

	FILE * fp2;

	fp2 = fopen(file2, "r");
	if (!fp2) return 1;

	char * type2 = (char *)malloc(sizeof(char)* 5);
	
	if (!type2) return 1;
	if (fscanf(fp2, "%s ", type2) != 1) return 1;
	type2[4] = '\0';
	free(type2);
	free(file2);

	int r2, col2;
	
	if (fscanf(fp2, "%d %d", &col2, &r2) !=2) return 1;
	col2++;

	// Memory Allocate
	double ** data = (double **)malloc(sizeof(double *) * r2);
	if (!data) return 1;

	for (i=0; i<r2; i++) {
		data[i] = (double *)malloc(sizeof(double) * col2);
		if (!data[i])return 1;
	}

	valid=0;

	for (i = 0; i < r2; i++)  {
		for (j = 0; j < col2; j++) {
			if (j == 0) {
				data[i][j] = 1.0;
			} else {
				valid = fscanf(fp2, " %lf", &data[i][j]);
				if (valid!=1) return 1;
			}
		}
	}

	// New Prices
	double ** result = multiply(data, W, r2, col2, col1, 1);
	if (result==NULL) return 1;

	// Result Prices
	for (i=0; i<r2; i++) {
		for (j=0; j<1; j++) {
			printf("%.0f", result[i][j]);
		}
		printf("\n");
	}
	
	freeMatrix(data, r2);
	freeMatrix(result, r2);
	freeMatrix(W, col1);
	fclose(fp2);

	return 0;
}