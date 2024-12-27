#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> t(n);
	int sum = 0;
	for (int &ti : t) {
		cin >> ti;
		sum += ti;
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		int p, x;
		cin >> p >> x;
		cout << (sum - t[p - 1] + x) << endl;
	}
	return 0;
}
