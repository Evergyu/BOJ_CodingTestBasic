#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int n, i;
	long sum;
	while (cin >> n) {	//EOF ���ῡ ���� ����
		i = 0;
		sum = 0;
		while (1) {
			sum = sum * 10 + 1;

			if (sum % n == 0) break;

			sum %= n;					//���ڰ� �ſ� Ŀ���� modular ������ �̿��� ���� �� �ִ�.
			++i;
		}
		printf("%d\n", i + 1);
	}

	return 0;
}