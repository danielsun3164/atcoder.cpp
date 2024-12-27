#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<ll> count(n + 1, 1LL);
	ll answer = 1LL;
	for (int i = 2; i <= n; i++) {
		for (int j = i; j <= n; j += i) {
			count[j]++;
		}
		answer += i * count[i];
	}
	cout << answer << endl;
	return 0;
}
