// nested.c (��ø��)
#include <stdio.h>

int main(void) {
	int year = 2024, month = 12, day = 31;
	printf("Date: %d�� %d�� %d��\n", year, month, day);

	day++; printf("Tomorrow is ...\n");

	if (day > 31) {
		month++;
		day = 1;

		if (month > 12) {
			year++;
			month = 1;
		}
	}
	printf("Date: %d�� %d�� %d��\n", year, month, day);
	if (1 == month && 1 == day) printf("Happy New Year~!");

	return 0;
}