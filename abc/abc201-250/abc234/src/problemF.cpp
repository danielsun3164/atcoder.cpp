#include <bits/stdc++.h>
#include <atcoder/convolution>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = modint998244353;

const static int N = 26;

vector<mint> fact, inv_fact;

void init(int n) {
	fact.resize(n + 1);
	fact[0] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact.resize(n + 1);
	inv_fact[n] = fact[n].inv();
	for (int i = n - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
}

int main(void) {
	string s;
	cin >> s;
	int n = s.size();
	init(n);
	vector<int> freq(N, 0);
	for (int i = 0; i < n; i++) {
		freq[s[i] - 'a']++;
	}
	queue<vector<mint>> que;
	for (int i = 0; i < N; i++) {
		if (freq[i] > 0) {
			que.push(vector<mint>(inv_fact.begin(), inv_fact.begin() + freq[i] + 1));
		}
	}
	while (que.size() >= 2) {
		vector<mint> a = que.front();
		que.pop();
		vector<mint> b = que.front();
		que.pop();
		que.push(convolution(a, b));
	}
	vector<mint> a = que.front();
	mint answer = 0;
	for (int i = 1; i < int(a.size()); i++) {
		answer += fact[i] * a[i];
	}
	cout << answer.val() << endl;
	return 0;
}
