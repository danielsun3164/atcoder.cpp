#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct fraction {
	ll p, q;
	fraction(ll P = 0LL, ll Q = 1LL) : p(P), q(Q) {}
	bool operator<(const fraction &other) const {
		return p * other.q < other.p * q;
	}
	bool operator<=(const fraction &other) const {
		return p * other.q <= other.p * q;
	}
};

int main(void) {
	int n;
	cin >> n;
	vector<ll> x(n), y(n);
	vector<pair<fraction, fraction>> data(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
		data[i] = {fraction(y[i], x[i] - 1), fraction(y[i] - 1, x[i])};
	}
	sort(data.begin(), data.end());
	int answer = 0;
	fraction now;
	for (auto d : data) {
		if (now <= d.second) {
			answer++;
			now = d.first;
		}
	}
	cout << answer << endl;
	return 0;
}
