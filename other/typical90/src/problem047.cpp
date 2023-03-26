#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

const static vector<char> COLORS = { 'R', 'G', 'B' };
const static int N = 3;
const static mint B = 353;

string replace(string s, char a, char b) {
	string r = s;
	for (int i = 0; i < int(r.size()); i++) {
		if (a == r[i]) {
			r[i] = b;
		} else if (b == r[i]) {
			r[i] = a;
		}
	}
	return r;
}

vector<vector<mint>> calc_hash(string s) {
	int n = s.size();
	vector<vector<mint>> v(2, vector<mint>(n));
	v[0][0] = s[0];
	for (int i = 1; i < n; i++) {
		v[0][i] = v[0][i - 1] * B + s[i];
	}
	v[1][n - 1] = s[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		v[1][i] = B.pow(n - 1 - i) * s[i] + v[1][i + 1];
	}
	return v;
}

int main() {
	int n;
	cin >> n;
	string s, t;
	cin >> s >> t;
	vector<string> t2(N);
	for (int i = 0; i < N; i++) {
		t2[i] = replace(t, COLORS[i], COLORS[(i + 1) % N]);
	}
	vector<vector<mint>> hs = calc_hash(s);
	vector<vector<vector<mint>>> ht2(N);
	for (int i = 0; i < N; i++) {
		ht2[i] = calc_hash(t2[i]);
	}
	int answer = 0;
	for (int k = -(n - 1); k < n; k++) {
		for (int j = 0; j < N; j++) {
			if (((k < 0) && (hs[1][-k] == ht2[j][0][n + k - 1])) || ((k >= 0) && (hs[0][n - k - 1] == ht2[j][1][k]))) {
				answer++;
			}
		}
	}
	cout << answer << endl;
	return 0;
}
