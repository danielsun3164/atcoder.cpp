#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int l, q;
	cin >> l >> q;
	set<int> st { 0, l };
	while (q--) {
		int c, x;
		cin >> c >> x;
		if (1 == c) {
			st.insert(x);
		} else {
			auto it = st.lower_bound(x);
			int upper = *it;
			it--;
			cout << (upper - *it) << endl;
		}
	}
	return 0;
}
