#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a, b = 0;	// 정수로 입력받기 -> int형 사용
	scanf("%d %d", &a, &b);

	printf("%f", a / b);	// 출력은 소수 
	return 0;
}