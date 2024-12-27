#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<double> b(n), r(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> r[i];
	}
	cout << fixed << setprecision(20)
		 << (accumulate(b.begin(), b.end(), 0.0) / n + accumulate(r.begin(), r.end(), 0.0) / n)
		 << endl;
	return 0;
}
