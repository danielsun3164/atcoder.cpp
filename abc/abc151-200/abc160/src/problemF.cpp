#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

vector<mint> fact, inv_fact;

void init(int n) {
	fact.resize(n + 1);
	inv_fact.resize(n + 1);
	fact[0] = 1;
	for (int i = 1; i <= n; i++) {
		fact[i] = fact[i - 1] * i;
	}
	inv_fact[n] = fact[n].inv();
	for (int i = n - 1; i >= 0; i--) {
		inv_fact[i] = inv_fact[i + 1] * (i + 1);
	}
}

void calc_count(vector<vector<int>> &edges, vector<mint> &dp, vector<int> &count, int now,
				int prev) {
	dp[now] = 1;
	int sum = 0;
	for (int to : edges[now]) {
		if (to != prev) {
			calc_count(edges, dp, count, to, now);
			sum += count[to];
			dp[now] *= dp[to] * inv_fact[count[to]];
		}
	}
	dp[now] *= fact[sum];
	count[now] = sum + 1;
}

void calc_answer(vector<vector<int>> &edges, vector<mint> &dp, vector<mint> &ans,
				 vector<int> &count, int now, int prev) {
	ans[now] = 1;
	int sum = 0;
	for (int to : edges[now]) {
		sum += count[to];
		ans[now] *= dp[to] * inv_fact[count[to]];
	}
	ans[now] *= fact[sum];

	for (int to : edges[now]) {
		if (to != prev) {
			count[now] = sum - count[to] + 1;
			dp[now] = ans[now] * inv_fact[sum] / dp[to] * fact[count[to]] * fact[sum - count[to]];
			calc_answer(edges, dp, ans, count, to, now);
		}
	}
}

int main() {
	int n;
	cin >> n;
	init(n);
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
	}

	vector<mint> dp(n), ans(n, 0);
	vector<int> count(n, 0);
	calc_count(edges, dp, count, 0, -1);
	calc_answer(edges, dp, ans, count, 0, -1);
	for (mint ai : ans) {
		cout << ai.val() << endl;
	}
	return 0;
}
