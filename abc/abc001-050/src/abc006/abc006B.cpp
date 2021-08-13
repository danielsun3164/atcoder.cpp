#include <bits/stdc++.h>
using namespace std;

const int MOD = 10'007;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	a[0] = a[1] = 0;
	a[2] = 1;
	for (int i = 3; i < n; i++) {
		a[i] = (a[i - 3] + a[i - 2] + a[i - 1]) % MOD;
	}
	cout << a[n - 1] << endl;
	return 0;
}
