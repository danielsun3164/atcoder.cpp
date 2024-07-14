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

int main() {
	int n;
	cin >> n;
	vector<Point> p(n);
	for (int i = 0; i < n; i++) {
		cin >> p[i].x >> p[i].y;
	}
	sort(p.begin(), p.end());
	vector<mint> pow2(n + 1);
	pow2[0] = 1;
	for (int i = 1; i <= n; i++) {
		pow2[i] = pow2[i - 1] * 2;
	}
	mint ans = 0;
	for (int leftmost = 0; leftmost < n; leftmost++) {
		vector<Point> pts;
		for (int i = leftmost; i < n; i++) {
			pts.emplace_back(p[i] - p[leftmost]);
		}
		// 最初の(0,0)を除いてソートを実施する
		sort(pts.begin() + 1, pts.end(), [](auto a, auto b) { return cross(a, b) > 0; });
		int len = pts.size();
		vector<vector<int>> count(len, vector<int>(len, 0));
		for (int i = 0; i < len; i++) {
			for (int j = i + 1; j < len; j++) {
				for (int k = i + 1; k < j; k++) {
					if (cross(pts[i] - pts[k], pts[j] - pts[k]) > 0) {
						count[i][j]++;
					}
				}
			}
		}
		vector<vector<vector<mint>>> dp(len, vector<vector<mint>>(len, vector<mint>(2, 0)));
		for (int j = 1; j < len; j++) {
			dp[0][j][0]++;
		}
		for (int i = 0; i < len; i++) {
			for (int j = i + 1; j < len; j++) {
				for (int k = 0; k < 2; k++) {
					for (int l = j + 1; l < len; l++) {
						if (cross(pts[j] - pts[i], pts[l] - pts[j]) > 0) {
							dp[j][l][k ^ (1 & cross(pts[j], pts[l]))] +=
								dp[i][j][k] * pow2[count[j][l]];
						}
					}
				}
			}
		}
		for (int i = 1; i < len; i++) {
			for (int j = i + 1; j < len; j++) {
				ans += dp[i][j][0];
			}
		}
	}
	cout << ans.val() << endl;
	return 0;
}
