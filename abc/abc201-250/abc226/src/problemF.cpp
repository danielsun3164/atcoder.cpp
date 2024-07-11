#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

ll gcd(ll a, ll b) {
	return (0LL == b) ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return a / gcd(a, b) * b;
}

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

void dfs(int n, int k, mint &answer, int rest, int now, int c, ll LCM,
		 mint ways) {
	if (now && (rest >= now)) {
		dfs(n, k, answer, rest - now, now, c + 1, LCM, ways);
	}
	ways *= fact[now - 1].pow(c) * inv_fact[now].pow(c) * inv_fact[c];
	if (0 == rest) {
		answer += mint{LCM}.pow(k) * ways;
		return;
	}
	for (int next = now + 1; next <= rest; next++) {
		dfs(n, k, answer, rest - next, next, 1, lcm(LCM, next), ways);
	}
}

int main(void) {
	int n, k;
	cin >> n >> k;
	init(n);
	mint answer = 0;
	dfs(n, k, answer, n, 0, 0, 1, fact[n]);
	cout << answer.val() << endl;
	return 0;
}
