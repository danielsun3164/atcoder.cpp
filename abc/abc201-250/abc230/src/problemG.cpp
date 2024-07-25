#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	vector<int> p(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
	vector<bool> pr(n + 1, true);
	pr[1] = false;
	vector<int> mu(n + 1, -1), m;
	mu[1] = 0;
	vector<vector<int>> d(n + 1);
	for (int i = 2; i <= n; i++) {
		if (pr[i]) {
			mu[i] = -mu[i];
			for (int j = i + i; j <= n; j += i) {
				pr[j] = false;
				mu[j] = (0 == (j / i) % i) ? 0 : -mu[j];
			}
		}
		if (0 != mu[i]) {
			m.emplace_back(i);
			for (int j = i; j <= n; j += i) {
				d[j].emplace_back(i);
			}
		}
	}
	vector<bool> used(n + 1, false);
	vector<int> cand;
	vector<ll> num(n + 1, 0LL);
	ll answer = 0LL;
	for (int a : m) {
		for (int i = a; i <= n; i += a) {
			for (int j : d[p[i]]) {
				num[j]++;
				if (!used[j]) {
					used[j] = true;
					cand.emplace_back(j);
				}
			}
		}
		for (int b : cand) {
			answer += mu[a] * ll(mu[b]) * ((num[b] * (num[b] + 1)) >> 1);
			num[b] = 0LL;
			used[b] = false;
		}
		cand.clear();
	}
	cout << answer << endl;
	return 0;
}
