#include <stdio.h>

/*
	<출력함수>
	1. printf("%c %d %s")
	2. putchar() : 하나의 문자를 출력하는 함수
	3. puts() : 하나의 문자열을 출력하는 함수

	<입력함수>
	1. scanf() : 다수개의 다양한 상수를 입력받는 함수
	2. getchar() : 하나의 문자를 입력받는 함수
	3. gets() : 하나의 문자열을 입력받는 함수
*/

void main(void) {
	char ch = 'm';
	putchar('A');
	putchar('\n');
	putchar(ch);
	putchar('\n');

	puts("Hello");		//개행문자(enter) 포함
	puts("good-bye");
	printf("Hello");	//개행문자 불포함
	printf("good-bye");

}