#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 100'000;

int main() {
	int n;
	cin >> n;
	vector<ll> count(N + 1);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		count[a]++;
	}
	ll answer = 0LL;
	for (int i = 0; i < N / 2; i++) {
		answer += count[i] * count[N - i];
	}
	answer += count[N / 2] * (count[N / 2] - 1) / 2;
	cout << answer << endl;
	return 0;
}
