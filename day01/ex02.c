#include <stdio.h>

// 하나의 솔루션이 하나의 exe파일 >> 따라서 

void main(void)
{
	//변수의 선언부
	char a;
	int b;
	double c;

	//변수의 대입부
	a = 'M';
	b = 345;
	c = 12.345;

	printf("문자열 : %s", "Hello C!!!\n");

	printf("문자 : %c\n", a);
	printf("정수 : %d\n", b);
	printf("실수 : %f\n", c);
	printf("실수 : %.3f\n", c);
	printf("실수 : %.2f\n", c);
	printf("실수 : %.1f\n", c);

	printf("문자 : %c\n정수 : %d\n", a, b);  //여러 문자 한번에 표시가능. 앞에서부터 순서대로 출력됨.
	/*
		printf("변환문자");
		변환문자 : %알파벳

			문자	%c
			문자열	%s
			실수	%f  별다른 말이 없으면 소수점 여섯 자리까지 출력됨.
			정수	%d (10진수)
					%o (8진수)
					%x (16진수)

		'\n' : 개행문자			- enter
		'\t' : tab 문자			- 간격 띄우기
		'\a' : 삑 경고벨소리
		'\b' : backspace문자
	*/
}