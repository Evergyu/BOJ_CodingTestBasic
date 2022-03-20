#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool sosu(int num) {
	if (num < 2) return false;
	int a = (int)sqrt(num);
	for (int i = 2; i <= a; i++) if (num % i == 0) return false;
	return true;
}
int main() {
	int N;
	bool T;
	vector<int>v;
	while (1) {
		T = false;
		cin >> N;
		if (N < 6) break;
		
		for (int i = 3; i < 1000000; i++) {
			if (sosu(i)) v.push_back(i);
		}
		printf("%d", v.size());
		for (int i = 0; i < v.size(); i++) {
			for (int j = i+1; j < v.size(); j++){
				if (N == v[i] + v[j]) {
					printf("%d = %d + %d\n", N, v[i],v[j]);
					T = true;
					break;
				}
			}
			if (T) break;
		}
	}

	return 0;
}