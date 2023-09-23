#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LLONG_MAX >> 1;

struct point {
	ll x, y, c;
};

struct line {
	// ax + by + c = 0
	ll a, b, c;

	bool operator<(const line &l) const {
		if (a == l.a) {
			if (b == l.b) {
				return c < l.c;
			}
			return b < l.b;
		}
		return a < l.a;
	}

	bool operator==(const line &l) const {
		return (a == l.a) && (b == l.b) && (c == l.c);
	}
};

struct data_p {
	line l;
	pair<ll, ll> p;
	ll sumc;

	bool operator==(const data_p &dt) const {
		return (l == dt.l) && (p == dt.p) && (sumc == dt.sumc);
	}
};

ll gcd(ll a, ll b) {
	return (0LL == a) ? b : gcd(b % a, a);
}

line norm(line l) {
	ll g = gcd(gcd(abs(l.a), abs(l.b)), abs(l.c));
	l.a /= g;
	l.b /= g;
	l.c /= g;
	if (0LL == l.a) {
		if (l.b < 0) {
			l.a = -l.a;
			l.b = -l.b;
			l.c = -l.c;
		}
	} else {
		if (l.a < 0) {
			l.a = -l.a;
			l.b = -l.b;
			l.c = -l.c;
		}
	}
	return l;
}

data_p calc(point &a, point &b) {
	data_p ret;
	ret.sumc = a.c + b.c;
	ret.p = { a.x + b.x, a.y + b.y };
	ret.l = norm( { 2 * (b.x - a.x), 2 * (b.y - a.y), a.x * a.x + a.y * a.y - b.x * b.x - b.y * b.y });
	return ret;
}

int main(void) {
	int n;
	cin >> n;
	vector<point> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].x >> a[i].y >> a[i].c;
	}
	vector<data_p> vec;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			vec.emplace_back(calc(a[i], a[j]));
		}
	}
	sort(vec.begin(), vec.end(), [](data_p &x, data_p &y) {
		return x.l < y.l;
	});

	ll answer = -1LL;
	data_p nil = { { 0LL, 0LL, 0LL }, { 0LL, 0LL }, -INF }, p1 = nil;
	for (int pos = 0; pos < int(vec.size()); pos++) {
		if ((pos > 0) && (vec[pos].l != vec[pos - 1].l)) {
			p1 = nil;
		}
		if (p1.p == vec[pos].p) {
			if (p1.sumc < vec[pos].sumc) {
				p1 = vec[pos];
			}
		} else {
			answer = max(answer, p1.sumc + vec[pos].sumc);
			if (p1.sumc < vec[pos].sumc) {
				p1 = vec[pos];
			}
		}
	}
	cout << answer << endl;
	return 0;
}
