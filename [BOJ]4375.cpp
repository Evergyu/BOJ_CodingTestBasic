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
		
		sum %= n;					//���ڰ� �ſ� Ŀ���� modular ������ �̿��� ���� �� �ִ�.
		++i;
	}
	printf("%d", i + 1);


	return 0;
}