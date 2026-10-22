#include <bits/stdc++.h>
#include <atcoder/modint>
#include <atcoder/segtree>
using namespace std;
using mint = atcoder::modint998244353;
using Matrix = vector<vector<mint>>;

const int N = 3;
const vector<Matrix> MATRIX{{{1, 1, 1}, {0, 1, 0}, {0, 0, 1}},
							{{1, 0, 0}, {1, 1, 1}, {0, 0, 1}},
							{{1, 1, 1}, {1, 1, 1}, {0, 0, 1}}};

Matrix op(Matrix a, Matrix b) {
	Matrix result(N, vector<mint>(N, 0));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				result[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	return result;
}

Matrix e() {
	return Matrix{{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
}

int main(void) {
	int n, q;
	string s;
	cin >> n >> q >> s;
	vector<Matrix> v(n);
	for (int i = 0; i < n; i++) {
		v[i] = ('?' == s[i]) ? move(MATRIX[2]) : move(MATRIX[s[i] - '0']);
	}
	atcoder::segtree<Matrix, op, e> seg(v);
	while (q--) {
		int x;
		char c;
		cin >> x >> c;
		x--;
		if ('?' == c) {
			seg.set(x, MATRIX[2]);
		} else {
			seg.set(x, MATRIX[c - '0']);
		}
		Matrix result = seg.prod(0, n);
		mint answer = result[0][2] + result[1][2];
		cout << answer.val() << endl;
	}
	return 0;
}
