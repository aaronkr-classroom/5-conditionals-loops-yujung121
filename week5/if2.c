// if.c
#include <stdio.h>

int main(void) {
	int score;

	printf("�۾�����\n");
	printf("������ �Է��ϼ��� >>> ");
	scanf_s("%d", &score);

	char grade = (90 <= score) ? 'A' :
		(80 <= score) ? 'B' :
		(70 <= score) ? 'C' :
		(60 <= score) ? 'D' : 'F';
		
	printf("������ %d�̰�, ����� %c�Դϴ�.\n", score, grade);
	printf("�۾�����\n");

	getch(); // �ܼ�â�� �����ϱ�

	return 0;
}