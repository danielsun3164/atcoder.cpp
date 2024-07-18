#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll calc(int bit, string &s) {
	int n = s.size(), prev = 0;
	ll result = 0LL;
	for (int i = 0; i < n; i++) {
		if (1 & (bit >> i)) {
			result += stoll(s.substr(prev, i - prev + 1));
			prev = i + 1;
		}
	}
	result += stoll(s.substr(prev, n - prev));
	return result;
}

int main(void) {
	string s;
	cin >> s;
	int n = s.size();
	ll answer = 0LL;
	for (int bit = 0; bit < (1 << (n - 1)); bit++) {
		answer += calc(bit, s);
	}
	cout << answer << endl;
	return 0;
}
