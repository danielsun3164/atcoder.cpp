#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static char MARU = 'o';

int main() {
	int n;
	string s;
	cin >> n >> s;
	vector<int> a(n + 1), b(n + 1);
	a[0] = b[0] = 0;
	for (int i = 1; i <= n; i++) {
		if (MARU == s[i - 1]) {
			a[i] = i;
			b[i] = b[i - 1];
		} else {
			a[i] = a[i - 1];
			b[i] = i;
		}
	}
	ll answer = 0LL;
	for (int i = 1; i <= n; i++) {
		answer += min(a[i], b[i]);
	}
	cout << answer << endl;
	return 0;
}
