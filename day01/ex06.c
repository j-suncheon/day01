#include <stdio.h>

/*
Ű����� �ϳ��� ���ڸ� �Է¹޾� ����ϴ� �ڵ� �ۼ�
*/

void main(void) {
	char ch;
	
	printf("���ڸ� �ϳ� �Է� : ");
	//ch = getchar();
	scanf("%c",&ch);  // &���� - ������ �����ּҸ� �ǹ���.
	// ;_CRT_SECURE_NO_WARNINGS

	printf("�Է¹��� ���� : [%c]\n", ch);
}