#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int array[9], sum = 0, k = 0, j = 8;
    bool arrayb[9] = { false, };
    for (int i = 0; i < 9; i++) cin >> array[i];
    sort(array, array + 9);
    for (int i = 0; i < 9; i++) {
        sum += array[i];
        arrayb[i] = true;
    }
    while ((sum-array[k]-array[j])==100) {






    
}