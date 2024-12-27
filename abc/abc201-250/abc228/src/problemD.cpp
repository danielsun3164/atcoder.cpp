#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 1 << 20;
const static int MASK = N - 1;

int main(void) {
	int q;
	cin >> q;
	vector<ll> a(N, -1LL);
	map<int, int> interval;
	interval[N] = 0;
	while (q--) {
		int t;
		ll x;
		cin >> t >> x;
		int i = int(x & MASK);
		if (1 == t) {
			auto iter = interval.upper_bound(i);
			if (iter == interval.end()) {
				i = 0;
				iter = interval.begin();
			}
			interval.erase(iter);
			if (iter->second < i) {
				a[i] = x;
				int l1 = iter->second, r1 = i, l2 = i + 1, r2 = iter->first;
				if (l1 != r1) {
					interval[r1] = l1;
				}
				if (l2 != r2) {
					interval[r2] = l2;
				}
			} else {
				a[iter->second] = x;
				int l = iter->second + 1, r = iter->first;
				if (l != r) {
					interval[r] = l;
				}
			}
		} else {
			cout << a[i] << endl;
		}
	}
	return 0;
}
