#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll a, b, x, y;

ll f(int k) {
	return a + b * k + x * k * (k + 1) / 2;
}

ll optimize(int low, int high) {
	while (high - low > 2) {
		int m1 = (low + high) >> 1, m2 = m1 + 1;
		if (f(m1) < f(m2)) {
			low = m1;
		} else {
			high = m2;
		}
	}
	return f(low + 1);
}

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		ll answer = numeric_limits<ll>::min();
		a = 0, b = 0;
		for (int i = 0; i < n; i++) {
			cin >> x >> y;
			if (x > 0) {
				answer = max(answer, max(f(1), f(y)));
			} else {
				answer = max(answer, optimize(0, y + 1));
			}
			a = f(y);
			b += x * y;
		}
		cout << answer << endl;
	}
	return 0;
}
