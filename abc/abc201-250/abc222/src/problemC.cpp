#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<string> a(n << 1);
	vector<pair<int, int>> order(n << 1);
	for (int i = 0; i < (n << 1); i++) {
		cin >> a[i];
		order[i] = { 0, (n << 1) - i };
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int index1 = j << 1, index2 = (j << 1) | 1;
			char c1 = a[(n << 1) - order[index1].second][i], c2 = a[(n << 1) - order[index2].second][i];
			if ('G' == c1) {
				if ('C' == c2) {
					order[index1].first++;
				} else if ('P' == c2) {
					order[index2].first++;
				}
			} else if ('C' == c1) {
				if ('G' == c2) {
					order[index2].first++;
				} else if ('P' == c2) {
					order[index1].first++;
				}
			} else {
				if ('G' == c2) {
					order[index1].first++;
				} else if ('C' == c2) {
					order[index2].first++;
				}
			}
		}
		sort(order.rbegin(), order.rend());
	}
	for (int i = 0; i < (n << 1); i++) {
		cout << ((n << 1) - order[i].second + 1) << endl;
	}
	return 0;
}
