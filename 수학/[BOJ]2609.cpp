#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int lcm(int a, int b) {
	return a * b / gcd(a, b);
}

int main() {
		int a, b;
		cin >> a >> b;

		printf("%d\n%d", gcd(a, b), lcm(a, b));
	}
