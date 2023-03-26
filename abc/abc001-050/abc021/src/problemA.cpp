#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	cout << __builtin_popcount(n) << endl;
	for (int i = 0; i <= 3; i++) {
		if (n & (1 << i)) {
			cout << (1 << i) << endl;
		}
	}
	return 0;
}
