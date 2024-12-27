#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n;
	cin >> t >> n;
	vector<int> d(t + 1, 0);
	for (int i = 0; i < n; i++) {
		int l, r;
		cin >> l >> r;
		d[l]++;
		d[r]--;
	}
	for (int i = 1; i <= t; i++) {
		d[i] += d[i - 1];
	}
	for (int i = 0; i < t; i++) {
		cout << d[i] << endl;
	}
	return 0;
}
