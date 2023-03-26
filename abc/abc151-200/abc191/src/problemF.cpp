#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	return (0 == b) ? a : gcd(b, a % b);
}

void add(map<int, int> &t, int j, int a) {
	if (t.find(j) != t.end()) {
		t[j] = gcd(t[j], a);
	} else {
		t[j] = a;
	}
}

int main() {
	int n, m = INT_MAX;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		m = min(m, a[i]);
	}
	map<int, int> t;
	for (int i = 0; i < n; i++) {
		for (int j = 1; (j * j <= a[i]) && (j <= m); j++) {
			if (0 == a[i] % j) {
				add(t, j, a[i]);
				int k = a[i] / j;
				if ((j != k) && (k <= m)) {
					add(t, k, a[i]);
				}
			}
		}
	}
	int ans = 0;
	for (pair<int, int> p : t) {
		if (p.first == p.second) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
