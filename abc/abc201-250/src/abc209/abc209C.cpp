#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;

using mint = atcoder::modint1000000007;

int main(void) {
	int n;
	cin >> n;
	vector<int> c(n);
	for (int i = 0; i < n; i++) {
		cin >> c[i];
	}
	sort(c.begin(), c.end());
	mint ans = 1;
	for (int i = 0; i < n; i++) {
		ans *= max(0, c[i] - i);
	}
	cout << ans.val() << endl;
	return 0;
}
