#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(vector<ll> &t, vector<int> &k, vector<vector<int>> &a,
		vector<bool> &learned, int now) {
	ll answer = t[now];
	for (int ai : a[now]) {
		if (!learned[ai]) {
			learned[ai] = true;
			answer += calc(t, k, a, learned, ai);
		}
	}
	return answer;
}

int main(void) {
	int n;
	cin >> n;
	vector<ll> t(n);
	vector<int> k(n);
	vector<vector<int>> a(n);
	for (int i = 0; i < n; i++) {
		cin >> t[i] >> k[i];
		a[i].resize(k[i]);
		for (int &aij : a[i]) {
			cin >> aij;
			aij--;
		}
	}
	vector<bool> learned(n, false);
	cout << calc(t, k, a, learned, n - 1) << endl;
	return 0;
}
