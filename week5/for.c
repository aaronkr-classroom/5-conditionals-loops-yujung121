// for.c
#include <stdio.h>

int main(void) {
	int sum = 0, num;

	for (num = 1; num <= 5; num++) {
		printf("num(%d) + sum(%d) = ", num, sum);

		sum = sum + num; // ���ο� �Ѱ谪

		printf("%d\n", sum);
	}

	printf("Final: num = %d, sum = %d", num, sum);

	return 0;
}