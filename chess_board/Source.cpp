#include <iostream>
using namespace std;

void main() {
	int n = 2, k = 3;
	cin >> (n % 2 == 1 ? n : k);
	cout << n << "\t" << k;
}