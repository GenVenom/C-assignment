/* WAP to check if the given input is palindrome or not */

#include <stdio.h>
#include <string.h>

int main() {
	char inputString[20];
	int i, length, flag = 0;

	printf("Enter a string: ");
	scanf("%s", inputString);

	length = strlen(inputString);

	for (i = 0; i < length; i++) {
		if (inputString[i] != inputString[length - i - 1]) {
			flag = 1;
			break;
		}
	}

	if (flag) {
		puts("Not a palindrome");
	} else {
		puts("A palindrome");
	}

	return 0;
}
