#include <stdio.h>

void main(void) {
	int num = 15; // 변수 초기화 - 선언과 대입을 동시에
	num = 015; // 8진수의 15를 대입
	num = 0x15; // 16진수의 15를 대입

	int a, b, c = 20, d = 30; //아직 a,b에는 아무 값이 담기지 않음. 그러한 변수를 가비지 값라고 함.
	// 초기화가 안된 변수는 앞에 쓰는 것이 원칙이다.

	printf("10진수 : %d\n", num);
	printf("8진수 : %o\n", num);
	printf("16진수 : %X\n", num); // x는 소문자와 대문자 전부 사용가능
	
}