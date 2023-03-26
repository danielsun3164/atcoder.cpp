#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	string s;
	cin >> n >> s;
	int count = 0;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		count++;
		if ((i == n - 1) || (s[i] != s[i + 1])) {
			v.emplace_back(count);
			count = 0;
		}
	}
	ll answer = 0LL;
	for (int vi : v) {
		answer += vi * (vi + 1LL) / 2;
	}
	cout << (n * ll(n + 1) / 2 - answer) << endl;
	return 0;
}
