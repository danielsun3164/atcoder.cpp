#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> q(n);
	for (int i = 1; i <= n; i++) {
		int p;
		cin >> p;
		q[p - 1] = i;
	}
	for (int i = 0; i < n; i++) {
		cout << (i ? " " : "") << q[i];
	}
	cout << endl;
	return 0;
}
