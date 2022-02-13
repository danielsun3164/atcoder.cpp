#include <bits/stdc++.h>
using namespace std;

const int N = 3;

int main(void) {
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].first;
		v[i].second = i;
	}
	sort(v.begin(), v.end());
	vector<int> ans(N);
	for (int i = 0; i < N; i++) {
		ans[v[i].second] = N - i;
	}
	for (int i = 0; i < N; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}
