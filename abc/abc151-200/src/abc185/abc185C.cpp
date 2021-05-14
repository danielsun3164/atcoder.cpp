#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll fn(int n, int m) {
	ll r = 1LL;
	for (int i = 0; i < m; i++) {
		r *= n - i;
		r /= i + 1;
	}
	return r;
}

int main(void) {
	int l;
	cin >> l;
	cout << fn(l - 1, 11) << endl;
	return 0;
}
