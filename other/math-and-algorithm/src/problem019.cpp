#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 3;

int main() {
	int n;
	cin >> n;
	vector<ll> count(N, 0LL);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		count[a - 1]++;
	}
	ll answer = 0LL;
	for (int i = 0; i < N; i++) {
		answer += count[i] * (count[i] - 1) / 2;
	}
	cout << answer << endl;
	return 0;
}
