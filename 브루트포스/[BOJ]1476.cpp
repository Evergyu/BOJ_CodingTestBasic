#include <iostream>
using namespace std;
int main() {
	int E = 1, S = 1, M = 1, c = 1, UE, US, UM;
	cin >> UE >> US >> UM;

	while ((UE != E) || (US != S) || (UM!=M)) {
		E++, S++, M++, c++;
		if (E == 16) E = 1;
		if (S == 29) S = 1;
		if (M == 20) M = 1;
		
	}
	printf("%d", c);

}