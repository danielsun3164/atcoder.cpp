#include <bits/stdc++.h>
#include <atcoder/twosat>
using namespace std;

vector<int> marked(int n) {
	vector<int> divisor(n + 1, 0);
	divisor[1] = 1;
	for (int i = 2; i <= n; i++) {
		if (!divisor[i]) {
			for (int j = i; j <= n; j += i) {
				if (!divisor[j]) {
					divisor[j] = i;
				}
			}
		}
	}
	return divisor;
}

vector<int> prime_factor(int n, vector<int> &divisor) {
	vector<int> res;
	while (n > 1) {
		int p = divisor[n];
		res.emplace_back(p);
		while (p == divisor[n]) {
			n /= p;
		}
	}
	return res;
}

int main() {
	int n;
	cin >> n;
	vector<int> divisor = marked(2'000'005);
	map<int, vector<pair<int, int>>> memo;
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			int a;
			cin >> a;
			for (int p : prime_factor(a, divisor)) {
				memo[p].emplace_back(make_pair(i, j));
				count++;
			}
		}
	}
	atcoder::two_sat ts(2 * count);
	int pos = 0;
	for (auto [p, v] : memo) {
		for (int i = 0; i < int(v.size()); i++) {
			ts.add_clause(v[i].first, !v[i].second, count + pos, true);
			if (i) {
				ts.add_clause(count + pos - 1, false, count + pos, true);
				ts.add_clause(v[i].first, !v[i].second, count + pos - 1, false);
			}
			pos++;
		}
	}
	cout << (ts.satisfiable() ? "Yes" : "No") << endl;
	return 0;
}
