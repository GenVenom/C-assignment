/* WAP to read n numbers from user and store in array. Add even numbers and odd
 * numbers separately and display the result using function */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int numberOfInputs, i, evenSum = 0, oddSum = 0;

	/* Getting input about array size */
	printf("How many numbers do you want to enter? ");
	scanf("%d", &numberOfInputs);

	int nums[numberOfInputs];

	/* Filling out the array and finding the even, odd sum */
	for (i = 0; i < numberOfInputs; i++) {
		printf("Enter the number #%d: ", i+1);
		scanf("%d", &nums[i]);

		if (nums[i] % 2 == 0) {
			evenSum += nums[i];
		} else {
			oddSum += nums[i];
		}
	}

	/* Printing even and odd sum */
	printf("Even sum: %d, Odd sum: %d\n", evenSum, oddSum);

	return 0;
}
