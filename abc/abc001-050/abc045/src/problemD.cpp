#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 3;
const static int M = 10;

void calc(int h, int w, vector<ll> &count, pair<int, int> pr, set<pair<int, int>> &st) {
	int sx = max(0, pr.first - N + 1), sy = max(0, pr.second - N + 1),
		ex = min(h - 1, pr.first + N - 1), ey = min(w - 1, pr.second + N - 1);
	int nh = ex - sx + 1, nw = ey - sy + 1;
	vector<vector<bool>> v(nh, vector<bool>(nw, false));
	vector<vector<int>> sum(nh + 1, vector<int>(nw + 1, 0));
	for (int i = 0; i < nh; i++) {
		for (int j = 0; j < nw; j++) {
			v[i][j] = st.contains({sx + i, sy + j});
			sum[i + 1][j + 1] = sum[i + 1][j] + sum[i][j + 1] - sum[i][j] + (v[i][j]);
		}
	}
	for (int i = 0; i <= nh - N; i++) {
		for (int j = 0; j <= nw - N; j++) {
			count[sum[i + N][j + N] - sum[i + N][j] - sum[i][j + N] + sum[i][j]]++;
		}
	}
}

int main(void) {
	int h, w, n;
	cin >> h >> w >> n;
	set<pair<int, int>> st;
	for (int i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		st.insert({a - 1, b - 1});
	}
	vector<ll> count(M, 0LL);
	for (pair<int, int> pr : st) {
		calc(h, w, count, pr, st);
	}
	count[0] = ll(h - N + 1) * ll(w - N + 1);
	for (int i = 1; i < M; i++) {
		count[i] /= i;
		count[0] -= count[i];
	}
	for (ll ci : count) {
		cout << ci << endl;
	}
	return 0;
}
