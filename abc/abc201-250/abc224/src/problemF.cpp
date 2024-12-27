#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	string s;
	cin >> s;
	int n = s.size();
	vector<mint> p2(n + 1);
	p2[0] = p2[1] = 1;
	for (int i = 2; i <= n; i++) {
		p2[i] = p2[i - 1] * 2;
	}
	mint sum = 0, answer = 0;
	for (int i = 0; i < n; i++) {
		int now = s[i] - '0';
		answer *= 10;
		answer += sum * p2[i];
		answer += now * p2[i + 1];
		sum += now;
	}
	cout << answer.val() << endl;
	return 0;
}
