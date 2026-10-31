#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> idx(n + 1);
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		idx[a].emplace_back(i);
	}
	int q;
	cin >> q;
	while (q--) {
		int l, r, x;
		cin >> l >> r >> x;
		cout << (upper_bound(idx[x].begin(), idx[x].end(), r) -
				 lower_bound(idx[x].begin(), idx[x].end(), l))
			 << endl;
	}
	return 0;
}
