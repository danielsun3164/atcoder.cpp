#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		sum += a[i] * b[i];
	}
	cout << ((0 == sum) ? "Yes" : "No") << endl;
	return 0;
}
