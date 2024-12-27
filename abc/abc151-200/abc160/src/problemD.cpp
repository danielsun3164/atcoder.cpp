#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, x, y;
	cin >> n >> x >> y;
	x--;
	y--;
	vector<int> ans(n - 1, 0);
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			ans[min(abs(j - i), min(abs(x - i) + abs(y - j) + 1, abs(y - i) + abs(x - j) + 1)) -
				1]++;
		}
	}
	for (int ai : ans) {
		cout << ai << endl;
	}
	return 0;
}
