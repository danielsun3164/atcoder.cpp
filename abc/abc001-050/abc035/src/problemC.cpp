#include <bits/stdc++.h>
using namespace std;

const static int N = 1;

int main(void) {
	int n, q;
	cin >> n >> q;
	vector<int> v(n + 1, 0);
	for (int i = 0; i < q; i++) {
		int l, r;
		cin >> l >> r;
		v[l - 1] = N - v[l - 1];
		v[r] = N - v[r];
	}
	vector<int> s(n + 1);
	s[0] = 0;
	for (int i = 0; i < n; i++) {
		s[i + 1] = (v[i]) ? N - s[i] : s[i];
	}
	for (int i = 1; i <= n; i++) {
		cout << s[i];
	}
	cout << endl;
	return 0;
}
