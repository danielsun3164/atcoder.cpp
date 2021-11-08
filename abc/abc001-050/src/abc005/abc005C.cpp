#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int t, n, m;
	cin >> t >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int a_index = 0, b_index = 0;
	while (b_index < m) {
		while ((a_index < n) && (a[a_index] < b[b_index] - t)) {
			a_index++;
		}
		if ((a_index >= n) || (a[a_index] > b[b_index])) {
			cout << "no" << endl;
			return 0;
		}
		a_index++;
		b_index++;
	}
	cout << "yes" << endl;
	return 0;
}
