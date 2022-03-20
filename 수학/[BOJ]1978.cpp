#include <iostream>
using namespace std;
int main() {
	int N,count=0;
	cin >> N;
	int* array = new int(N);
	for (int i = 0; i < N; i++)
		cin >> array[i];

	for (int i = 0,j; i < N; i++) {
		if (array[i] == 1) continue;
		for (j=2; j < array[i]; j++) {
			if (array[i] % j == 0) break;
		}
		if (j == array[i]) count++;
	}
	printf("%d", count);

	return 0;
}