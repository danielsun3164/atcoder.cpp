#include <bits/stdc++.h>
using namespace std;

const int N = 20;

int main() {
	int n, m, q;
	cin >> n >> m >> q;
	vector<int> a(m), b(m), s(m), t(m);
	vector<map<int, int>> bus(n + 1);
	for (int i = 0; i < m; i++) {
		cin >> a[i] >> b[i] >> s[i] >> t[i];
		bus[a[i]][s[i]] = i;
	}
	vector<vector<int>> table(N, vector<int>(m));
	for (int i = 0; i < m; i++) {
		auto itr = bus[b[i]].lower_bound(t[i]);
		table[0][i] = (itr == bus[b[i]].end()) ? i : itr->second;
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < m; j++) {
			table[i][j] = table[i - 1][table[i - 1][j]];
		}
	}
	while (q--) {
		int x, y, z;
		cin >> x >> y >> z;
		auto itr = bus[y].lower_bound(x);
		if ((itr == bus[y].end()) || (z <= s[itr->second])) {
			cout << y << endl;
			continue;
		}
		int now = itr->second;
		if (z <= t[now]) {
			cout << a[now] << " " << b[now] << endl;
			continue;
		}
		for (int i = N - 1; i >= 0; i--) {
			int next = table[i][now];
			if (t[next] < z) {
				now = next;
			}
		}
		itr = bus[b[now]].lower_bound(t[now]);
		if ((itr == bus[b[now]].end()) || (z <= s[itr->second])) {
			cout << b[now] << endl;
			continue;
		}
		int next = itr->second;
		cout << a[next] << " " << b[next] << endl;
	}
	return 0;
}
