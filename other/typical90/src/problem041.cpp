#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Point {
	ll px, py;
};

Point operator+(const Point &a1, const Point &a2) {
	return Point{a1.px + a2.px, a1.py + a2.py};
}

Point operator-(const Point &a1, const Point &a2) {
	return Point{a1.px - a2.px, a1.py - a2.py};
}

bool operator<(const Point &a1, const Point &a2) {
	if (a1.px == a2.px) {
		return a1.py < a2.py;
	}
	return (a1.px < a2.px);
}

// 点p1とp2の外積を求める
ll crs(Point p1, Point p2) {
	return p1.px * p2.py - p1.py * p2.px;
}

ll gcd(ll a, ll b) {
	return (0LL == b) ? a : gcd(b, a % b);
}

int main() {
	// Step #1. 入力
	int n;
	cin >> n;
	vector<Point> g(n);
	for (int i = 0; i < n; i++) {
		cin >> g[i].px >> g[i].py;
	}
	sort(g.begin(), g.end());

	// Step #2. 凸包を求める
	vector<Point> g1, g2, totsuhou;
	g1.emplace_back(g[0]), g2.emplace_back(g[0]);
	g2.emplace_back(g[1]), g1.emplace_back(g[1]);
	for (int i = 2; i < n; i++) {
		while ((g1.size() >= 2) &&
			   (crs(g1[g1.size() - 1] - g1[g1.size() - 2], g[i] - g1[g1.size() - 1]) <= 0LL)) {
			g1.pop_back();
		}
		while ((g2.size() >= 2) &&
			   (crs(g2[g2.size() - 1] - g2[g2.size() - 2], g[i] - g2[g2.size() - 1]) >= 0LL)) {
			g2.pop_back();
		}
		g1.emplace_back(g[i]);
		g2.emplace_back(g[i]);
	}
	for (int i = 0; i < int(g1.size()); i++) {
		totsuhou.emplace_back(g1[i]);
	}
	for (int i = int(g2.size() - 2); i >= 1; i--) {
		totsuhou.emplace_back(g2[i]);
	}

	// Step #3. 辺上の格子点の数を求める
	ll edge_point = totsuhou.size();
	int s = totsuhou.size();
	for (int i = 0; i < s; i++) {
		ll ax = totsuhou[i].px, ay = totsuhou[i].py, bx = totsuhou[(i + 1) % s].px,
		   by = totsuhou[(i + 1) % s].py;
		long vx = abs(bx - ax), vy = abs(by - ay), r = gcd(vx, vy);
		edge_point += r - 1LL;
	}

	// Step #4. 多角形の面積（を2倍した値）を求める
	ll area = 0LL;
	for (int i = 0; i < s; i++) {
		ll ax = totsuhou[i].px, ay = totsuhou[i].py, bx = totsuhou[(i + 1) % s].px,
		   by = totsuhou[(i + 1) % s].py;
		area += (bx - ax) * (by + ay);
	}
	area = abs(area);

	ll answer = area + edge_point + 2LL;
	cout << ((answer >> 1) - n) << endl;
	return 0;
}
