#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 100'000;

/**
 * https://atcoder.jp/contests/abc215/submissions/30935347 に参考に作成
 */
vector<int> calc_spf() {
	vector<int> res(N + 1, 0);
	res[0] = res[1] = 1;
	for (int i = 2; i <= N; i++) {
		if (!res[i]) {
			res[i] = i;
			for (ll j = i * (ll) i; j <= N; j += i) {
				if (!res[j]) {
					res[j] = i;
				}
			}
		}
	}
	return res;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> spf = calc_spf();
	set<int> s;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		while (a > 1) {
			int x = spf[a];
			s.insert(x);
			a /= x;
		}
	}
	vector<bool> is_ans(m + 1, true);
	is_ans[0] = false;
	for (int si : s) {
		for (int j = si; j <= m; j += si) {
			is_ans[j] = false;
		}
	}
	vector<int> ans;
	for (int i = 1; i <= m; i++) {
		if (is_ans[i]) {
			ans.emplace_back(i);
		}
	}
	cout << ans.size() << endl;
	for (int &ansi : ans) {
		cout << ansi << endl;
	}
	return 0;
}
