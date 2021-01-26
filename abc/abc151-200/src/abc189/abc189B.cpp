#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, x;
	cin >> n >> x;
	x *= 100;
	vector<int> v(n), p(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i] >> p[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += v[i] * p[i];
		if (sum > x) {
			cout << (i + 1) << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}
