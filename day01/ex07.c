/*
	키보드로 하나의 정수를 입력받아 입력받은 정수에 50 더한 값을 출력하는 코드 작성
*/

#include <stdio.h>

void main(void) {
	int num;
	printf("정수를 하나 입력 : ");
	scanf("%d", &num);

	//printf("num=%d\n", num + 50);

	num = num + 50;
	printf("num=%d\n", num);

}