#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main() {
	int N;
	long long sum = 0;
	scanf("%d", &N);
	for (int i = 1; i <= N; i++) {
		sum += (N / i) * i;	//����� ���� �̿�
	}
	printf("%lld", sum);	//�ڷ��� �߻���
	return 0;
}