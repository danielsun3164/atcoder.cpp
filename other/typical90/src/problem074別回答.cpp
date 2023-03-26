#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	string s;
	cin >> n >> s;
	ll answer = 0LL;
	for (int i = 0; i < n; i++) {
		answer += (s[i] - 'a') * (1LL << i);
	}
	cout << answer << endl;
	return 0;
}
