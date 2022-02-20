#include <bits/stdc++.h>
using namespace std;

vector<int> multiply(vector<int> &a, vector<int> &b) {
	int n = a.size();
	vector<int> res(n);
	for (int i = 0; i < n; i++) {
		res[i] = a[b[i]];
	}
	return res;
}

vector<int> pow(vector<int> &a, int m) {
	int n = a.size();
	vector<int> res(n);
	for (int i = 0; i < n; i++) {
		res[i] = i;
	}
	while (m > 0) {
		if (1 & m) {
			res = multiply(res, a);
		}
		a = multiply(a, a);
		m >>= 1;
	}
	return res;
}

int main(void) {
	int n, m, d;
	cin >> n >> m >> d;
	vector<int> x(n);
	for (int i = 0; i < n; i++) {
		x[i] = i;
	}
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		swap(x[a - 1], x[a]);
	}
	x = pow(x, d);
	vector<int> ans(n);
	for (int i = 0; i < n; i++) {
		ans[x[i]] = i + 1;
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}
