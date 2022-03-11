#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int N;
	long long sum = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		sum += (N / i) * i;	//약수의 성질 이용
	}
	printf("%lld", sum);	//자료형 잘생각
	return 0;
}