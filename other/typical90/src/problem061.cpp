#include <bits/stdc++.h>
using namespace std;

int main() {
	int q;
	cin >> q;
	vector<int> v1, v2;
	while (q--) {
		int t, x;
		cin >> t >> x;
		if (1 == t) {
			v1.emplace_back(x);
		} else if (2 == t) {
			v2.emplace_back(x);
		} else {
			if (x > int(v1.size())) {
				cout << v2[x - v1.size() - 1] << endl;
			} else {
				cout << v1[v1.size() - x] << endl;
			}
		}
	}
	return 0;
}
