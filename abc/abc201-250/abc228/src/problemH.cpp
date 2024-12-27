#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll floor_div(ll x, ll y) {
	return x / y - (((x ^ y) < 0LL) && (x % y));
}

struct line {
	ll a, b;
	line() : a(), b() {}
	explicit line(ll a_, ll b_) : a(a_), b(b_) {}
	ll eval(ll x) {
		return a * x + b;
	}
};

class convex_hull_trick {
	deque<line> lines;

   public:
	convex_hull_trick() : lines() {}

	void add_line(line l) {
		while (lines.size() >= 2) {
			line m = lines[lines.size() - 1], n = lines[lines.size() - 2];
			if (floor_div(m.b - n.b, n.a - m.a) < floor_div(l.b - m.b, m.a - l.a)) {
				break;
			}
			lines.pop_back();
		}
		lines.push_back(l);
	}

	ll get_min(ll x) {
		while ((lines.size() >= 2) && (lines[0].eval(x) > lines[1].eval(x))) {
			lines.pop_front();
		}
		return lines.front().eval(x);
	}
};

int main(void) {
	int n, x;
	cin >> n >> x;
	vector<pair<ll, ll>> ac(n);
	for (auto& [a, c] : ac) {
		cin >> a >> c;
	}
	sort(ac.begin(), ac.end());
	convex_hull_trick cht;
	ll sum_c = 0LL, subt = 0LL, last = 0LL;
	for (int i = 0; i < n; i++) {
		cht.add_line(line(-sum_c, last));
		auto& [a, c] = ac[i];
		sum_c += c;
		subt += a * c;
		last = cht.get_min(a) + sum_c * a + x;
	}
	cout << last - subt << endl;
	return 0;
}
