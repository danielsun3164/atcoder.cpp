#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int q;
	cin >> q;
	multiset<ll> st;
	while (q--) {
		int t, k;
		ll x;
		cin >> t >> x;
		if (1 == t) {
			st.insert(x);
		} else {
			cin >> k;
			bool ng = false;
			if (2 == t) {
				auto it = st.upper_bound(x);
				while (k--) {
					if (it == st.begin()) {
						ng = true;
						break;
					}
					it--;
				}
				cout << ((ng) ? -1LL : *it) << endl;
			} else {
				auto it = st.lower_bound(x);
				while (k--) {
					if (it == st.end()) {
						ng = true;
						break;
					}
					if (k) {
						it++;
					}
				}
				cout << ((ng) ? -1LL : *it) << endl;
			}
		}
	}
	return 0;
}
