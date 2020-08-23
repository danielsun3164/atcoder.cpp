#include <bits/stdc++.h>
using namespace std;

bool my_compare(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v[i] = make_pair(a, b);
	}
	sort(v.begin(), v.end(), my_compare);
	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << endl;
	}
}
