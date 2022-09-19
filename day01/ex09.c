#include <stdio.h>

void main(void) {
	char ch;
	int num;

	printf("정수를 입력 : ");
	scanf("%d", &num);
	//while (getchar() != '\n');

	printf("문자를 입력 : ");
	scanf("%c", &ch);   //scanf가 입력버퍼를 받기때문에 발생하는 문제

	
	printf("ch : %c  num : %d\n", ch, num);
}