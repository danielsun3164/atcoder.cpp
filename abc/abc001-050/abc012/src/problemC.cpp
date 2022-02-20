#include <bits/stdc++.h>
using namespace std;

const int N = 10;

int main(void) {
	int n;
	cin >> n;
	n = 2025 - n;
	for (int i = 1; i < N; i++) {
		if ((0 == n % i) && (n / i < N)) {
			cout << i << " x " << n / i << endl;
		}
	}
	return 0;
}
