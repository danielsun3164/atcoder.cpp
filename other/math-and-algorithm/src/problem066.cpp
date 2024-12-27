#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, k;
	cin >> n >> k;
	ll sum = 0LL;
	for (int a = 1; a <= n; a++) {
		for (int b = max(1, a - k); b <= min(n, a + k); b++) {
			for (int c = max(1, a - k); c <= min(n, a + k); c++) {
				if ((abs(a - b) < k) && (abs(a - c) < k) && (abs(b - c) < k)) {
					sum++;
				}
			}
		}
	}
	cout << (ll(n) * n * n - sum) << endl;
	return 0;
}
