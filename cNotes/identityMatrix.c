#include<stdio.h>
#include<stdlib.h>

int **identityMatrix(int n, int m) {
	int **matrix = malloc(n*sizeof(int*));
	
	for (int i = 0; i < n; ++i) {
		int *row = malloc(m*sizeof(int));
		for (int j = 0; j < m; ++j) {
			row[j] = i == j ? 1 : 0;
		}
		matrix[i] = row;
	}
	return matrix;
}

int main() {
	int **matrix = identityMatrix(3,3);
	for (int i = 0; i < 3; ++i) {
		printf("|");
		for (int j = 0; j < 3; ++j) {
			printf(" %d", matrix[i][j]);
		}
		printf(" |\n");
	}
	for (int i = 0; i < 3; ++i) {
		free(matrix[i]);
	}
	free(matrix);

}
