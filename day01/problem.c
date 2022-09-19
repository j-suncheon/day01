#include <stdio.h>

/*
	1. 연산자 전까지 책을 읽어보기
	2. 자신의 컴퓨터에 visual c++ 설치하기
	3. 하루 10개이상의 코드를 따라쳐보기 - 제일 중요
	4. 키보드로 1부터 10사이의 반지름을 입력받아서 원의 둘레와 넓이를 출력하는 코드를 작성하시오.
	5. 100~200사이의 정수를 입력받아 8,10,16진수로 출력하는 코드
		100~200 사이의 정수 입력 : 126


	1~10사이의 반지름 입력 : 10
	반지름 : 10
	원의 둘레 : 2*pi*10
	원의 넓이 : pi * 10* 10
*/
const float PIE = 3.14;
void main(void) {

	int r;
	printf("반지름(단 0<r<=10의 정수) : ");
	scanf("%d", &r);

	printf("원의 둘레 : %.2f\n", 2 * PIE * r);
	printf("원의 넓이 : %.2f\n", PIE * r *r);

	int num;
	printf("100~200사이의 정수를 입력하시오. : ");
	scanf("%d", &num);

	printf("%o\n", num);
	printf("%d\n", num);
	printf("%X\n", num);
}