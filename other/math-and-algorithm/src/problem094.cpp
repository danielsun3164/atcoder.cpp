#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> b(n - 1), a(n);
	for (int &bi : b) {
		cin >> bi;
	}
	a[0] = b[0];
	a[n - 1] = b[n - 2];
	for (int i = 1; i < n - 1; i++) {
		a[i] = min(b[i - 1], b[i]);
	}
	cout << accumulate(a.begin(), a.end(), 0) << endl;
	return 0;
}
