#include <stdio.h>

void main(void) {
	int num, num2;

	
	/*printf("첫번째 정수 : ");
	scanf("%d", &num);

	printf("두번째 정수 : ");
	scanf("%d", &num2);*/

	printf("정수 2개를 입력 : ");
	scanf("%d%d", &num, &num2); // scanf 앞의 ""안에는 변환문자만 들어갈 수 있다.
	printf("num = %d, num2 = %d\n", num, num2);
}