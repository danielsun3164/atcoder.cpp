#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int l, h, n;
	cin >> l >> h >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cout << ((a[i] > h) ? -1 : max(0, l - a[i])) << endl;
	}
	return 0;
}
