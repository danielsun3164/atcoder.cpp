#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	ll sum = n * ll(n + 1) * 2;
	for (int i = 0; i < 4 * n - 1; i++) {
		int a;
		cin >> a;
		sum -= a;
	}
	cout << sum << endl;
	return 0;
}
