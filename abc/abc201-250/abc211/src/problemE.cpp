#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const vector<int> XS = { -1, 1, 0, 0 };
const vector<int> YS = { 0, 0, -1, 1 };
const char WHITE = '.';

set<ll> memo;

int dfs(int n, vector<string> &s, int k, ll bit) {
	int ans = 0;
	if (memo.end() == memo.find(bit)) {
		memo.insert(bit);
		if (k == int(bitset<64>(bit).count())) {
			return 1;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((WHITE == s[i][j]) && (0LL == (1LL << (i * n + j) & bit))) {
					bool ok = false;
					if (0LL == bit) {
						ok = true;
					} else {
						for (int k = 0; k < int(XS.size()); k++) {
							int nx = i + XS[k], ny = j + YS[k];
							if ((0 <= nx) && (nx < n) && (0 <= ny) && (ny < n) && ((1LL << (nx * n + ny) & bit))) {
								ok = true;
								break;
							}
						}
					}
					if (ok) {
						ans += dfs(n, s, k, bit | (1LL << (i * n + j)));
					}
				}
			}
		}
	}
	return ans;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<string> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	cout << dfs(n, s, k, 0LL) << endl;
	return 0;
}
