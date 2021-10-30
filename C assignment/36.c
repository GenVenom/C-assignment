/* WAP to read order of matrix and its elements. Find transpose matrix of the
 * matrix */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int m, n, i, j;

	/* Getting input about no of rows and columns */
	printf("Enter the number of rows and columns you want to enter: ");
	scanf("%d %d", &m, &n);

	int inputMatrix[m][n], transMatrix[n][m];

	/* Filling data in first and second matrixes */
	puts("Input matrix:");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("Enter the element for row #%d - column #%d: ", i+1, j+1);
			scanf("%d", &inputMatrix[i][j]);
		}
	}

	/* Finding out the transpose matrix */
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			transMatrix[j][i] = inputMatrix[i][j];
		}
	}

	/* Printing out the transpose matrix */
	puts("Transpose matrix:");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d\t", transMatrix[i][j]);
		}
		puts("");
	}

	return 0;
}
