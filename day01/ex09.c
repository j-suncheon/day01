#include <stdio.h>

void main(void) {
	char ch;
	int num;

	printf("������ �Է� : ");
	scanf("%d", &num);
	//while (getchar() != '\n');

	printf("���ڸ� �Է� : ");
	scanf("%c", &ch);   //scanf�� �Է¹��۸� �ޱ⶧���� �߻��ϴ� ����

	
	printf("ch : %c  num : %d\n", ch, num);
}