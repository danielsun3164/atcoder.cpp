#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

struct Point {
	int x, y;

	explicit Point(int nx = 0, int ny = 0) {
		x = nx;
		y = ny;
	}

	bool operator<(const Point &p) const {
		return (x < p.x) || ((x == p.x) && (y < p.y));
	}

	Point operator-(const Point &p) const {
		return Point(x - p.x, y - p.y);
	}
};

int cross(Point p, Point q) {
	return p.x * q.y - p.y * q.x;
}

int area2(vector<Point> &p, int i, int j, int k) {
	return abs(cross(p[j] - p[i], p[k] - p[i]));
}

int main() {
	int n;
	cin >> n;
	vector<Point> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i].x >> p[i].y;
	}
	sort(p.begin(), p.end());
	vector<vector<vector<int>>> inside(n, vector<vector<int>>(n, vector<int>(n, 0))),
		parity(n, vector<vector<int>>(n, vector<int>(n)));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (i == j || j == k || k == j) {
					continue;
				}
				int area = area2(p, i, j, k);
				parity[i][j][k] = area & 1;
				for (int l = 0; l < n; l++) {
					if ((l != i) && (l != j) && (l != k) &&
						(area2(p, l, i, j) + area2(p, l, j, k) + area2(p, l, k, i) == area)) {
						inside[i][j][k]++;
					}
				}
			}
		}
	}
	vector<mint> pow2(n + 1);
	pow2[0] = 1;
	for (int i = 1; i <= n; i++) {
		pow2[i] = pow2[i - 1] * 2;
	}
	mint ans = 0;
	vector<vector<vector<mint>>> upper(n, vector<vector<mint>>(n, vector<mint>(2))),
		lower(n, vector<vector<mint>>(n, vector<mint>(2)));
	for (int must = n - 1; must >= 0; must--) {
		for (int i = must; i < n; i++) {
			for (int j = must; j < n; j++) {
				for (int k = 0; k < 2; k++) {
					upper[i][j][k] = lower[i][j][k] = 0;
				}
			}
		}
		for (int j = must + 1; j < n; j++) {
			upper[must][j][0] = lower[must][j][0] = 1;
		}
		for (int i = must; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				for (int k = 0; k < 2; k++) {
					for (int l = j + 1; l < n; l++) {
						if (cross(p[l] - p[j], p[j] - p[i]) > 0) {
							upper[j][l][k ^ parity[must][j][l]] +=
								upper[i][j][k] * pow2[inside[must][j][l]];
						} else {
							lower[j][l][k ^ parity[must][j][l]] +=
								lower[i][j][k] * pow2[inside[must][j][l]];
						}
					}
				}
			}
		}
		for (int j = must + 1; j < n; j++) {
			for (int k = 0; k < 2; k++) {
				mint up = 0, lo = 0;
				for (int i = must; i < j; i++) {
					up += upper[i][j][k];
					lo += lower[i][j][k];
				}
				ans += up * lo;
			}
		}
	}
	cout << (ans - n * (n - 1) / 2).val() << endl;
	return 0;
}
