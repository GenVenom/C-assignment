/* Write a recursive function to solve the Tower of Hanoi (TOH) problem */

#include <stdio.h>

void towerOfHanoi(int numberOfDisks, char rodSource, char rodDist, char rodAux);

int main() {
	int numberOfDisks = 3;
	char rodNames[] = {'A', 'B', 'C'};

	towerOfHanoi(numberOfDisks, rodNames[0], rodNames[2], rodNames[1]);

	return 0;
}

void towerOfHanoi(int numberOfDisks, char rodSource, char rodDist, char rodAux) {
	if (numberOfDisks == 1) {
		printf("Moving disk 1 from rod %c to rod %c\n", rodSource, rodDist);
		return;
	}

	towerOfHanoi(numberOfDisks - 1, rodSource, rodAux, rodDist);
	printf("Moving disk %d from rod %c to rod %c\n", numberOfDisks, rodSource, rodDist);
	towerOfHanoi(numberOfDisks - 1, rodAux, rodDist, rodSource);
}
