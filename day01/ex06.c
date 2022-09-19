#include <stdio.h>

/*
키보드로 하나의 문자를 입력받아 출력하는 코드 작성
*/

void main(void) {
	char ch;
	
	printf("문자를 하나 입력 : ");
	//ch = getchar();
	scanf("%c",&ch);  // &변수 - 변수의 시작주소를 의미함.
	// ;_CRT_SECURE_NO_WARNINGS

	printf("입력받은 문자 : [%c]\n", ch);
}