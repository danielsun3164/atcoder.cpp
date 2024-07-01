#include <bits/stdc++.h>
#include <atcoder/convolution>
#include <atcoder/modint>
using namespace std;
using namespace atcoder;
using mint = modint998244353;

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

mint comb(int n, int k) {
	return (0 == n) ? 1 : fact[n] * inv_fact[k] * inv_fact[n - k];
}

vector<mint> f1(int n) {
	vector<mint> a(n - 1);
	for (int k = 0; k < n - 1; k++) {
		a[k] = comb(n + k - 1, (k << 1) + 1);
	}
	return a;
}

vector<mint> f2(int n) {
	vector<mint> a(n);
	for (int k = 0; k < n; k++) {
		a[k] = comb(n + k - 1, k << 1);
	}
	return a;
}

int main(void) {
	int n, m, k;
	cin >> n >> m >> k;
	init(n << 1);
	vector<int> a(k);
	for (int i = 0; i < k; i++) {
		cin >> a[i];
	}
	if (0 == k) {
		mint answer = comb(n + m - 1, 2 * m - 1) * fact[m];
		cout << answer.val() << endl;
		return 0;
	}
	deque<vector<mint>> dque;
	for (int i = 0; i < k - 1; i++) {
		dque.push_back(f1(a[i + 1] - a[i] + 1));
	}
	dque.push_back(f2(a.front()));
	dque.push_back(f2(n + 1 - a.back()));
	while (int(dque.size()) >= 2) {
		vector<mint> a1 = dque.front();
		dque.pop_front();
		vector<mint> a2 = dque.front();
		dque.pop_front();
		vector<mint> a3 = convolution(a1, a2);
		while (int(a3.size()) > m - k + 1) {
			a3.pop_back();
		}
		dque.push_back(a3);
	}
	mint answer = dque.front()[m - k] * fact[m - k];
	cout << answer.val() << endl;
	return 0;
}
