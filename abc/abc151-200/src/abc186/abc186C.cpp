#include <bits/stdc++.h>
using namespace std;

bool ok(int n, int m) {
	while (n > 0) {
		int r = n % m;
		if (7 == r) {
			return false;
		}
		n /= m;
	}
	return true;
}

int main(void) {
	int n, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if (ok(i, 10) && ok(i, 8)) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
