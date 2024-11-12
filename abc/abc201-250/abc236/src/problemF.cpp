#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	int m = 1 << n;
	vector<pair<ll, int>> v;
	for (int i = 1; i < m; i++) {
		int c;
		cin >> c;
		v.emplace_back(c, i);
	}
	sort(v.begin(), v.end());
	set<int> st;
	ll answer = 0LL;
	for (auto [c, i] : v) {
		if (!st.contains(i)) {
			answer += c;
			set<int> t = st;
			for (int ti : t) {
				st.insert(ti ^ i);
			}
			st.insert(i);
			if (m - 1 == int(st.size())) {
				break;
			}
		}
	}
	cout << answer << endl;
	return 0;
}
