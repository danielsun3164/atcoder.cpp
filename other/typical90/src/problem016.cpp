#include <bits/stdc++.h>
using namespace std;

const int N = 9999;

int main() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int ans = INT_MAX;
	for (int i = 0; i <= min(n / a, N); i++) {
		int m = n - a * i;
		for (int j = 0; j <= min(m / b, N - i); j++) {
			int p = m - b * j;
			if (0 == p % c) {
				ans = min(ans, i + j + p / c);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
