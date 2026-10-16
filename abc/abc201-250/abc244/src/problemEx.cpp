#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Point = pair<ll, ll>;

const ll INF = LONG_LONG_MAX >> 1;
const double INV_PHI = (sqrt(5.0) - 1) / 2;

ll ccw(Point& a, Point& b, Point& c) {
	ll cross =
		(b.first - a.first) * (c.second - b.second) - (b.second - a.second) * (c.first - b.first);
	if (cross > 0) {
		return 1;
	} else if (0 == cross) {
		return 0;
	} else {
		return -1;
	}
}

struct ConvexHull {
	vector<Point> lower, upper;
	ConvexHull(Point p) : lower{p}, upper{p} {}
	ConvexHull(const ConvexHull& a, const ConvexHull& b) {
		vector<Point> v;
		merge(a.lower.begin(), a.lower.end(), b.lower.begin(), b.lower.end(), back_inserter(v));
		for (Point p : v) {
			while ((lower.size() >= 2) && (ccw(lower.rbegin()[1], lower.back(), p) <= 0)) {
				lower.pop_back();
			}
			lower.emplace_back(p);
		}
		v.clear();
		merge(a.upper.begin(), a.upper.end(), b.upper.begin(), b.upper.end(), back_inserter(v));
		for (Point p : v) {
			while ((upper.size() >= 2) && (ccw(upper.rbegin()[1], upper.back(), p) >= 0)) {
				upper.pop_back();
			}
			upper.emplace_back(p);
		}
	}
	ll get(ll a, ll b) {
		auto& s = (b < 0) ? lower : upper;
		auto f = [&](ll i) { return a * s[i].first + b * s[i].second; };
		ll l = 0, r = s.size() - 1, r2 = round(r * INV_PHI), f_r2 = f(r2);
		while (abs(l - r) >= 6) {
			ll l2 = r + llround((l - r) * INV_PHI), f_l2 = f(l2);
			if (f_l2 < f_r2) {
				tie(l, r) = tuple{r, l2};
			} else {
				tie(r, r2, f_r2) = tuple{r2, l2, f_l2};
			}
		}
		ll result = -INF;
		if (l > r) {
			swap(l, r);
		}
		for (ll i = l; i <= r; i++) {
			result = max(result, f(i));
		}
		return result;
	}
};

int main(void) {
	int q;
	cin >> q;
	vector<ConvexHull> s;
	for (int i = 1; i <= q; i++) {
		ll x, y, a, b;
		cin >> x >> y >> a >> b;
		s.emplace_back(ConvexHull(Point{x, y}));
		for (int j = 1; (i & j) == 0; j <<= 1) {
			s.rbegin()[1] = ConvexHull(s.rbegin()[1], s.back());
			s.pop_back();
		}
		ll answer = -INF;
		for (auto& si : s) {
			answer = max(answer, si.get(a, b));
		}
		cout << answer << endl;
	}
	return 0;
}
