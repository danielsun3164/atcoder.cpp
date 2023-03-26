#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> ans(n, 0);
	for (int i = 1; i < n; i++) {
		int a;
		cin >> a;
		ans[a - 1]++;
	}
	for (int ai : ans) {
		cout << ai << endl;
	}
	return 0;
}
