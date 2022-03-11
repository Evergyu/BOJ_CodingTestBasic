#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int n, i;
	long sum;
	while (cin >> n) {	//EOF 종료에 대해 공부
		i = 0;
		sum = 0;
		while (1) {
			sum = sum * 10 + 1;

			if (sum % n == 0) break;

			sum %= n;					//숫자가 매우 커질때 modular 연산을 이용해 줄일 수 있다.
			++i;
		}
		printf("%d\n", i + 1);
	}

	return 0;
}