#include <bits/stdc++.h>
using namespace std;

const static int TEN = 10;

int main(void) {
	string x;
	cin >> x;
	int n = x.size();
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		a[i] = x[i] - '0';
	}
	for (int i = 1; i < n; i++) {
		a[i] += a[i - 1];
	}
	for (int i = n - 1; i > 0; i--) {
		a[i - 1] += a[i] / TEN;
		a[i] = a[i] % TEN;
	}
	for (int ai : a) {
		cout << ai;
	}
	cout << endl;
	return 0;
}
