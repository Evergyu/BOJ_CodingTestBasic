#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int n, i = 0;
	long sum = 0;

	scanf("%d", &n);
	i = 0;
	while (1) {
		sum = sum * 10 + 1;
		
		if (sum % n == 0) break;
		
		sum %= n;					//숫자가 매우 커질때 modular 연산을 이용해 줄일 수 있다.
		++i;
	}
	printf("%d", i + 1);


	return 0;
}