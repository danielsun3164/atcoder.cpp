#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;

const int N = 64;

int n;
vector<int> s, t;
vector<ull> u, v;
vector<vector<ull>> tmp, ans;
vector<int> emp;

void fi(int pos) {
	fill(emp.begin(), emp.end(), 0);
	for (int i = 0; i < n; i++) {
		if (0 == t[i]) {
			emp[i] = n - 1;
			for (int j = 0; j < n; j++) {
				emp[i] -= tmp[j][i];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		if (s[i] && (1ULL & (u[i] >> pos))) {
			ull valid = 0ULL;
			for (int j = 0; j < n; j++) {
				valid |= tmp[i][j];
			}
			if (0ULL == valid) {
				for (int j = 0; j < n; j++) {
					if (emp[j]) {
						emp[j]--;
						tmp[i][j] = 1ULL;
						break;
					}
				}
			}
		}
	}
}

void transpose() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			swap(tmp[i][j], tmp[j][i]);
		}
		swap(s[i], t[i]);
		swap(u[i], v[i]);
	}
}

void solve(int pos) {
	fill(tmp.begin(), tmp.end(), vector<ull>(n, 0ULL));
	for (int i = 0; i < n; i++) {
		if ((0 == s[i]) && (1ULL & (u[i] >> pos))) {
			for (int j = 0; j < n; j++) {
				tmp[i][j] = 1ULL;
			}
		}
		if ((0 == t[i]) && (1ULL & (v[i] >> pos))) {
			for (int j = 0; j < n; j++) {
				tmp[j][i] = 1ULL;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (s[i] == t[j]) {
				if (0 == s[i]) {
					tmp[i][j] = (1ULL & (u[i] >> pos)) | (1ULL & (v[j] >> pos));
				} else {
					tmp[i][j] = (1ULL & (u[i] >> pos)) & (1ULL & (v[j] >> pos));
				}
			}
		}
	}
	fi(pos);
	transpose();
	fi(pos);
	transpose();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ans[i][j] |= tmp[i][j] << pos;
		}
	}
}

bool check() {
	for (int i = 0; i < n; i++) {
		ull as = -1, os = 0ULL, as2 = -1, os2 = 0ULL;
		for (int j = 0; j < n; j++) {
			as &= ans[i][j];
			os |= ans[i][j];
			as2 &= ans[j][i];
			os2 |= ans[j][i];
		}
		if (((0 == s[i]) && (as != u[i])) || ((1 == s[i]) && (os != u[i])) ||
			((0 == t[i]) && (as2 != v[i])) || ((1 == t[i]) && (os2 != v[i]))) {
			return false;
		}
	}
	return true;
}

int main() {
	cin >> n;
	s.resize(n);
	t.resize(n);
	u.resize(n);
	v.resize(n);
	tmp.resize(n, vector<ull>(n));
	ans.resize(n, vector<ull>(n, 0ULL));
	emp.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> u[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < N; i++) {
		solve(i);
	}
	if (!check()) {
		cout << -1 << endl;
		return 0;
	}
	for (vector<ull> ansi : ans) {
		for (int j = 0; j < n; j++) {
			cout << ((j) ? " " : "") << ansi[j];
		}
		cout << endl;
	}
	return 0;
}
