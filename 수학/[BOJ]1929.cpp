#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	bool* array = new bool(b+1);
	memset(array, true, sizeof(array));
	for (int i = 2; i <= b; i++) {
		if (array[i]) {
			for (int j=1,k = i; k*j <= b; j++) {
				if((k+i*j)<=b)
					array[k + i * j] = false;
			}
		}
	}
	for (int i = a; i <= b; i++) {
		if (array[i]) {
			printf("%d\n", i);
		}
	}

	return 0;
}