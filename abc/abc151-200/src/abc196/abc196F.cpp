#include <bits/stdc++.h>
#include <atcoder/convolution>
#include <atcoder/modint>
using namespace std;

using mint = atcoder::modint998244353;

int main() {
	string s, t;
	cin >> s >> t;
	int n = s.size(), m = t.size();
	reverse(t.begin(), t.end());
	vector<mint> s1(n), s2(n), t1(m), t2(m);
	for (int i = 0; i < n; i++) {
		((s[i] == '1') ? s1 : s2)[i] = 1;
	}
	for (int i = 0; i < m; i++) {
		((t[i] == '1') ? t1 : t2)[i] = 1;
	}
	s1 = atcoder::convolution(s1, t2);
	s2 = atcoder::convolution(s2, t1);
	unsigned int ans = INT_MAX;
	for (int i = m - 1; i < n; i++) {
		ans = min(ans, s1[i].val() + s2[i].val());
	}
	cout << ans << endl;
	return 0;
}
