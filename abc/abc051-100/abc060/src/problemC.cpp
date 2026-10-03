#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int N;
	ll T;
	cin >> N >> T;
	vector<ll> t(N);
	for (ll &ti : t) {
		cin >> ti;
	}
	ll answer = 0;
	for (int i = 1; i < N; i++) {
		answer += min(t[i] - t[i - 1], T);
	}
	cout << (answer + T) << endl;
	return 0;
}
