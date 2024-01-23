#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	string n;
	cin >> n;
	int m = n.size();
	ll ans = 0LL;
	for (int bit = 1; bit < (1 << m); bit++) {
		string a, b;
		for (int i = 0; i < m; i++) {
			if (1 & (bit >> i)) {
				a.push_back(n[i]);
			} else {
				b.push_back(n[i]);
			}
		}
		if (a.empty() || b.empty()) {
			continue;
		}
		sort(a.begin(), a.end(), greater<char>());
		sort(b.begin(), b.end(), greater<char>());
		ans = max(ans, stoll(a) * stoll(b));
	}
	cout << ans << endl;
	return 0;
}
