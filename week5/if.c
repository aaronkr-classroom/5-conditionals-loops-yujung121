// if.c
#include <stdio.h>

int main(void) {
	int score = 92;
	char grade;

	printf("�۾�����\n");
	printf("������ �Է��ϼ��� >>> ");
	scanf_s("%d", &score);

	if (90 <= score) {
		grade = 'A';
		printf("������ %d�̰�, ����� %c�Դϴ�.\n", score, grade);
	}
	else if (80 <= score) {
		grade = 'B';
		printf("������ %d�̰�, ����� %c�Դϴ�.\n", score, grade);
	}
	else if (70 <= score) {
		grade = 'C';
		printf("������ %d�̰�, ����� %c�Դϴ�.\n", score, grade);
	}
	else if (60 <= score) {
		grade = 'D';
		printf("������ %d�̰�, ����� %c�Դϴ�.\n", score, grade);
	}
	else { // ��� ���� ���
		grade = 'F';
		printf("������ %d�̰�, ����� %c�Դϴ�.\n", score, grade);
	}

	printf("�۾�����\n");

	getch(); // �ܼ�â�� �����ϱ�

	return 0;
}