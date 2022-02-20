#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> v(m + 1, 0);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		int l, r, s;
		cin >> l >> r >> s;
		v[l - 1] += s;
		v[r] -= s;
		ans += s;
	}
	for (int i = 0; i < m; i++) {
		v[i + 1] += v[i];
	}
	cout << (ans - *min_element(v.begin(), v.end() - 1)) << endl;
	return 0;
}
