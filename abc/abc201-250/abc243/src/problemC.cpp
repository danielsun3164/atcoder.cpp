#include <bits/stdc++.h>
using namespace std;

const char RIGHT = 'R';

int main(void) {
	int n;
	cin >> n;
	vector<int> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	string s;
	cin >> s;
	map<int, int> rmp, lmp;
	for (int i = 0; i < n; i++) {
		if (RIGHT == s[i]) {
			if ((rmp.find(y[i]) == rmp.end()) || (rmp[y[i]] > x[i])) {
				rmp[y[i]] = x[i];
			}
		} else {
			if ((lmp.find(y[i]) == lmp.end()) || (lmp[y[i]] < x[i])) {
				lmp[y[i]] = x[i];
			}
		}
	}
	for (pair<int, int> p : rmp) {
		if ((lmp.find(p.first) != lmp.end()) && (p.second < lmp[p.first])) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
