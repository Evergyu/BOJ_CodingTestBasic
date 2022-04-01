#include <iostream>
using namespace std;

int findMax(int c, int p, int z, int y) {
	if (c >= p && c >= z && c >= y) return c;
	else if (p >= c && p >= z && p >= y) return p;
	else if (z >= p && z >= c && z >= y) return z;
	else if (y >= p && y >= z && y >= c) return y;
}

int main() {
	int N, max, c = 0, p = 0, z = 0, y = 0;
	cin >> N;
	char** array = new char* [N];
	for (int i = 0; i < N; i++) {
		array[i] = new char[N];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> array[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (array[i][j] == c) c++;
			else if (array[i][j] == p)p++;
			else if (array[i][j] == z)z++;
			else if (array[i][j] == y)y++;
			max = findMax(c, p, z, y);
		}


		c = p = z = y = 0;
	}



}