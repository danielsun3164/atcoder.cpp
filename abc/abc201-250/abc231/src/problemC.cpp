#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, q;
	cin >> n >> q;
	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}
	sort(a.begin(), a.end());
	while (q--) {
		int x;
		cin >> x;
		cout << distance(lower_bound(a.begin(), a.end(), x), a.end()) << endl;
	}
	return 0;
}
