#include <bits/stdc++.h>
using namespace std;

const char ONE = '1';
const int N = 3;

int pow(int n, int m) {
	int res = 1;
	while (m > 0) {
		if (1 & m) {
			res *= n;
		}
		n *= n;
		m >>= 1;
	}
	return res;
}

vector<int> calc_sizes(int k, int n) {
	vector<int> res(k, 1);
	int idx = 0;
	while (n > 0) {
		res[idx] += n % N;
		n /= N;
		idx++;
	}
	return res;
}

bool check_sizes(vector<string> &v, vector<string> &w, vector<int> &sizes) {
	int n = v.size();
	for (int i = 0; i < n; i++) {
		int size = 0;
		for (char c : v[i]) {
			size += sizes[c - ONE];
		}
		if (size != int(w[i].size())) {
			return false;
		}
	}
	return true;
}

bool calc_ans(vector<string> &ans, vector<string> &v, vector<string> &w, vector<int> &sizes) {
	int n = v.size();
	for (int i = 0; i < n; i++) {
		int idx = 0;
		for (int c : v[i]) {
			int now = c - ONE;
			if ("" == ans[now]) {
				ans[now] = w[i].substr(idx, sizes[now]);
			} else {
				if (ans[now] != w[i].substr(idx, sizes[now])) {
					return false;
				}
			}
			idx += sizes[now];
		}
	}
	return true;
}

int main(void) {
	int k, n;
	cin >> k >> n;
	vector<string> v(n), w(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i] >> w[i];
	}
	int p = pow(N, k);
	for (int i = 0; i < p; i++) {
		vector<int> sizes = calc_sizes(k, i);
		if (check_sizes(v, w, sizes)) {
			vector<string> ans(k, "");
			if (calc_ans(ans, v, w, sizes)) {
				for (string ansi : ans) {
					cout << ansi << endl;
				}
				return 0;
			}
		}
	}
	return 0;
}
