#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		sum += abs(b[i] - a[i]);
	}
	cout << (((sum <= k) && (0 == (1 & (k - sum)))) ? "Yes" : "No") << endl;
	return 0;
}
