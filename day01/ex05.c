#include <stdio.h>

/*
	<����Լ�>
	1. printf("%c %d %s")
	2. putchar() : �ϳ��� ���ڸ� ����ϴ� �Լ�
	3. puts() : �ϳ��� ���ڿ��� ����ϴ� �Լ�

	<�Է��Լ�>
	1. scanf() : �ټ����� �پ��� ����� �Է¹޴� �Լ�
	2. getchar() : �ϳ��� ���ڸ� �Է¹޴� �Լ�
	3. gets() : �ϳ��� ���ڿ��� �Է¹޴� �Լ�
*/

void main(void) {
	char ch = 'm';
	putchar('A');
	putchar('\n');
	putchar(ch);
	putchar('\n');

	puts("Hello");		//���๮��(enter) ����
	puts("good-bye");
	printf("Hello");	//���๮�� ������
	printf("good-bye");

}