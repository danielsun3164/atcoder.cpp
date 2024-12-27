#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		ll a, s;
		cin >> a >> s;
		ll b = s - (a << 1);
		cout << (((b >= 0) && (0LL == (b & a))) ? "Yes" : "No") << endl;
	}
	return 0;
}
