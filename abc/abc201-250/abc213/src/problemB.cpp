#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n), idx(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	iota(idx.begin(), idx.end(), 0);
	sort(idx.begin(), idx.end(), [&](const int x, const int y) {
		return a[y] < a[x];
	});
	cout << (idx[1] + 1) << endl;
	return 0;
}
