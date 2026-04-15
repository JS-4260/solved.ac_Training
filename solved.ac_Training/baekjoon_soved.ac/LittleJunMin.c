#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long a, b , c = 0;	// 문제조건이 (1 ≤ A, B, C ≤ 10**12)이므로 자료형을 long long으로 정의
	scanf("%lld %lld %lld", &a, &b, &c);	// long long의 형식지정자는 %lld

	printf("%lld", a + b + c);
	return 0;
}