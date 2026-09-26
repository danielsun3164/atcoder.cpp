#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const int N = 26;

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		int n;
		string s;
		cin >> n >> s;
		mint answer = 0;
		string target = s;
		for (int i = 0; i < int(s.size()) / 2; i++) {
			target[n - 1 - i] = target[i];
		}
		for (int i = 0; i <= (n - 1) / 2; i++) {
			answer = answer * N + (s[i] - 'A');
		}
		if (s >= target) {
			answer++;
		}
		cout << answer.val() << endl;
	}
	return 0;
}
