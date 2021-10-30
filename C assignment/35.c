/* WAP to read a matrix of order m*n from user. Pass this matrix to function
 * and multiply each element of the matrix by 3 */

#include <stdio.h>
#include <stdlib.h>

void mulMatrixBy3(int *matrix, int noRow, int noCol);

int main() {
	int m, n, i, j;

	/* Getting input about no of rows and columns */
	printf("Enter the number of rows and columns you want to enter: ");
	scanf("%d %d", &m, &n);

	int inputMatrix[m][n];

	/* Filling data in first and second matrixes */
	puts("Input matrix:");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("Enter the element for row #%d - column #%d: ", i+1, j+1);
			scanf("%d", &inputMatrix[i][j]);
		}
	}

	/* Multiplying the input matrix */
	mulMatrixBy3(&inputMatrix[0][0], m, n);

	/* Printing the multiplied matrix */
	puts("Matrix after multiplying by 3:");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", inputMatrix[i][j]);
		}
		puts("");
	}

	return 0;
}

void mulMatrixBy3(int *matrix, int noRow, int noCol) {
	int i, j;

	for (i = 0; i < noRow; i++) {
		for (j = 0; j < noCol; j++) {
			*((matrix + i * noCol) + j) *= 3;
		}
	}
}
