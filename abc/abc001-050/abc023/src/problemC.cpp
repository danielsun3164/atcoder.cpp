#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int r, c, k, n;
	cin >> r >> c >> k >> n;
	vector<int> cnt_r(r, 0), cnt_c(c, 0);
	vector<pair<int, int>> s;
	for (int i = 0; i < n; i++) {
		int ri, ci;
		cin >> ri >> ci;
		ri--;
		ci--;
		cnt_r[ri]++;
		cnt_c[ci]++;
		s.push_back({ri, ci});
	}
	vector<int> sum_r(c + 1, 0), sum_c(r + 1, 0);
	for (int cri : cnt_r) {
		sum_r[cri]++;
	}
	for (int cci : cnt_c) {
		sum_c[cci]++;
	}
	ll ans = 0LL;
	for (int i = max(0, k - r); i <= min(k, c); i++) {
		ans += sum_r[i] * (ll)sum_c[k - i];
	}
	for (pair<int, int> p : s) {
		int sum = cnt_r[p.first] + cnt_c[p.second];
		if (k == sum) {
			ans--;
		} else if (k + 1 == sum) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
