#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int N = 200;

int main(void) {
	long n;
	int k;
	cin >> n >> k;
	while (k) {
		if (0 == n % N) {
			n /= N;
		} else {
			n = n * 1000 + N;
		}
		k--;
	}
	cout << n << endl;
	return 0;
}
