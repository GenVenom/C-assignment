/* WAP to sort array of integers in ascending and descending order */

#include <stdio.h>

int main() {
	int nums[5], i, j, tempIndex, tempNum;

	/* Getting nums input from the user */
	puts("Enter 5 elements:");
	for (i = 0; i < 5; i++) {
		scanf("%d", &nums[i]);
	}

	/* Ascending and printing the ascended array */
	for (i = 0; i < 5; i++) {
		tempIndex = i;
		for (j = i; j < 5; j++) {
			if (nums[j] < nums[tempIndex]) {
				tempIndex = j;
			}
		}

		// swapping elements
		tempNum = nums[tempIndex];
		nums[tempIndex] = nums[i];
		nums[i] = tempNum;
	}

	puts("Ascending array:");
	for (i = 0; i < 5; i++) {
		printf("%d\n", nums[i]);
	}

	/* Descending and printing the descended array */
	for (i = 0; i < 5; i++) {
		tempIndex = i;
		for (j = i; j < 5; j++) {
			if (nums[j] > nums[tempIndex]) {
				tempIndex = j;
			}
		}

		// swapping elements
		tempNum = nums[tempIndex];
		nums[tempIndex] = nums[i];
		nums[i] = tempNum;
	}

	puts("Descending array:");
	for (i = 0; i < 5; i++) {
		printf("%d\n", nums[i]);
	}

	return 0;
}
