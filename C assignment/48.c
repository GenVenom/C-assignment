/* WAP to read name, roll and marks of 5 students using array of structure.
 * Display the name and roll of those students having marks greater than 80 */

#include <stdio.h>

struct student {
	char name[20];
	int roll;
	float marks;
};

int main() {
	struct student stu[5];
	int i;

	/* Getting info about students from the user */
	for (i = 0; i < 5; i++) {
		printf("=== For student #%d ===\n", i+1);
		printf("Name of the student? ");
		gets(stu[i].name);
		printf("Age of the student? ");
		scanf("%d", &stu[i].roll);
		printf("Marks obtained by the student? ");
		scanf("%f", &stu[i].marks);
		getchar();
	}
	puts("");

	/* Printing details of students obtaining marks greater than 80 */
	for (i = 0; i < 5; i++) {
		if (stu[i].marks > 80) {
			printf("=== Details of student #%d ===\n", i+1);
			printf("Name: %s\n", stu[i].name);
			printf("Age: %d\n", stu[i].roll);
		}
	}

	return 0;
}
