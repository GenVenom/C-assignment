/* WAP to ask two m*n matrixes and display both the sum and difference of two
 * matrices */

#include <stdio.h>

int main ()
{
	int m, n, i, j;

	/* Getting input about no of rows and columns */
	printf("Enter the number of rows and columns you want to enter: ");
	scanf("%d %d", &m, &n);

	int matrix1[m][n], matrix2[m][n], matrixSum[m][n], matrixDiff[m][n];

	/* Filling data in first and second matrixes */
	puts("For 1st matrix:");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("Enter the element for row #%d - column #%d: ", i+1, j+1);
			scanf("%d", &matrix1[i][j]);
		}
	}

	puts("For 2nd matrix:");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("Enter the element for row #%d - column #%d: ", i+1, j+1);
			scanf("%d", &matrix2[i][j]);
		}
	}

	/* Calculating matrix sum */
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			matrixSum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}

	/* Calculating matrix difference */
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			matrixDiff[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}

	/* Displaying the matrix sum */
	puts("Sum Matrix:");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", matrixSum[i][j]);
		}
		puts("");
	}

	/* Displaying the matrix difference */
	puts("Diff Matrix:");
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			printf("%d\t", matrixDiff[i][j]);
		}
		puts("");
	}

	return 0;
}
