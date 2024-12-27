#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

vector<mint> operator+(const vector<mint> &lhs, const vector<mint> &rhs) {
	vector<mint> res = lhs;
	res.resize(max(lhs.size(), rhs.size()));
	for (int i = 0; i < int(rhs.size()); i++) {
		res[i] += rhs[i];
	}
	return res;
}

vector<mint> operator-(const vector<mint> &lhs, const vector<mint> &rhs) {
	vector<mint> res = lhs;
	res.resize(max(lhs.size(), rhs.size()));
	for (int i = 0; i < int(rhs.size()); i++) {
		res[i] -= rhs[i];
	}
	return res;
}

vector<mint> sparse_mul(vector<mint> &f, mint a, mint b) {
	if (f.empty()) {
		return {};
	}
	int n = f.size();
	vector<mint> g(n + 1, 0);
	for (int i = 0; i < n; i++) {
		g[i + 1] += f[i] * a;
		g[i] += f[i] * b;
	}
	return g;
}

vector<mint> sparse_div(vector<mint> &f, mint a, mint b) {
	int n = f.size();
	if (n <= 1) {
		return {};
	}
	if (0 == b) {
		mint inv_a = a.inv();
		vector<mint> g(f.begin() + 1, f.end());
		for (mint &gi : g) {
			gi *= inv_a;
		}
		return g;
	}
	vector<mint> g(n - 1);
	mint inv_b = b.inv();
	g[0] = f[0] * inv_b;
	for (int i = 1; i < n - 1; i++) {
		g[i] = (f[i] - g[i - 1] * a) * inv_b;
	}
	return g;
}

mint eval(vector<mint> &f, mint x) {
	mint res = 0, basis = 1;
	for (mint fi : f) {
		res += fi * basis;
		basis *= x;
	}
	return res;
}

mint calc(vector<mint> &inv, vector<mint> &f, mint l, mint r) {
	int n = f.size();
	vector<mint> g(n + 1);
	g[0] = 0;
	for (int i = 0; i < n; i++) {
		g[i + 1] = f[i] * i * inv[i + 1];
	}
	return eval(g, r) - eval(g, l);
}

mint solve(int n, int k, vector<int> &l, vector<int> &r) {
	int mx = *max_element(r.begin(), r.end());
	vector<mint> inv(mx + 1);
	for (int i = 1; i <= mx; i++) {
		inv[i] = mint(i).inv();
	}
	vector<vector<int>> memo(mx + 1);
	for (int i = 0; i < n; i++) {
		memo[l[i]].emplace_back(i);
		memo[r[i]].emplace_back(i);
	}
	mint answer = 0;
	vector<vector<mint>> dp(n + 1);
	dp[n] = {1};
	for (int li = 0, ri = 1; li < mx; li++, ri++) {
		for (int i : memo[li]) {
			mint a = inv[r[i] - l[i]], b = a * (-l[i]);
			if (li == l[i]) {
				dp.erase(dp.begin());
				dp.push_back({});
				for (int j = n; j >= 0; j--) {
					dp[j] = sparse_mul(dp[j], a, b);
					if (j) {
						dp[j] = dp[j] + sparse_mul(dp[j - 1], -a, 1 - b);
					}
				}
			} else {
				dp[0] = sparse_div(dp[0], a, b);
				for (int j = 1; j < n; j++) {
					dp[j] = dp[j] - sparse_mul(dp[j - 1], -a, 1 - b);
					dp[j] = sparse_div(dp[j], a, b);
				}
				dp[n].clear();
			}
		}
		for (int i = 0; i < k; i++) {
			answer += calc(inv, dp[i], li, ri);
		}
	}
	return answer;
}

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> l(n), r(n);
	for (int i = 0; i < n; i++) {
		cin >> l[i] >> r[i];
	}
	cout << solve(n, k, l, r).val() << endl;
	return 0;
}
