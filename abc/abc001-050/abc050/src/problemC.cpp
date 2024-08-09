#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

int main(void) {
	int n;
	cin >> n;
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		mp[a]++;
	}
	for (auto [a, count] : mp) {
		bool ok = true;
		if ((1 & n) && (0 == a)) {
			if (1 != count) {
				ok = false;
			}
		} else {
			if (2 != count) {
				ok = false;
			}
		}
		if (!ok) {
			cout << 0 << endl;
			return 0;
		}
	}
	cout << mint(2).pow(n >> 1).val() << endl;
	return 0;
}
