#include <bits/stdc++.h>
using namespace std;

const string AC = "AC";

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> was(n, 0);
	vector<bool> ok(n, false);
	int ac = 0, wa = 0;
	for (int i = 0; i < m; i++) {
		int p;
		string s;
		cin >> p >> s;
		p--;
		if (AC == s) {
			if (!ok[p]) {
				ok[p] = true;
				wa += was[p];
				ac++;
			}
		} else {
			if (!ok[p]) {
				was[p]++;
			}
		}
	}
	cout << ac << " " << wa << endl;
	return 0;
}
