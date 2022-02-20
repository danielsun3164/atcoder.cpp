#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<ll> h(n);
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	sort(h.begin(), h.end());
	cout << (accumulate(h.begin(), h.begin() + max(n - k, 0), 0LL)) << endl;
	return 0;
}
