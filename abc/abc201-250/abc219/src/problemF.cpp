#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int M = 200'000;

ll divide(ll a, ll b) {
	if (b < 0) {
		a *= -1;
		b *= -1;
	}
	return (a >= 0) ? a / b : -(((-a) + (b - 1)) / b);
}

int main(void) {
	string s;
	ll k;
	cin >> s >> k;
	vector<pair<ll, ll>> vec;
	vec.push_back(pair(0, 0));

	ll dx = 0, dy = 0;
	for (char c : s) {
		if ('L' == c) {
			dx--;
		}
		if ('R' == c) {
			dx++;
		}
		if ('U' == c) {
			dy--;
		}
		if ('D' == c) {
			dy++;
		}
		vec.push_back(pair(dx, dy));
	}
	sort(vec.begin(), vec.end());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	if (((0 == dx) && (0 == dy)) || (1 == k)) {
		cout << vec.size() << endl;
		return 0;
	}

	if (0 == dx) {
		for (pair<ll, ll> &p : vec) {
			swap(p.first, p.second);
		}
		swap(dx, dy);
	}

	map<pair<ll, ll>, vector<ll>> mp;
	vector<ll> answer(M + 1, 0);
	for (pair<ll, ll> p : vec) {
		ll x = p.first, y = p.second, q = divide(x, dx);
		ll rx = x - q * dx, ry = y - q * dy;
		mp[pair(rx, ry)].push_back(q);
	}

	for (pair<pair<ll, ll>, vector<ll>> p : mp) {
		vector<ll> &v = p.second;
		sort(v.begin(), v.end());
		for (int i = 0; i < int(v.size() - 1); i++) {
			answer[1]++;
			answer[v[i + 1] - v[i] + 1]--;
		}
		answer[1]++;
	}
	for (int j = 0; j < 2; j++) {
		for (int i = 1; i <= M; i++) {
			answer[i] += answer[i - 1];
		}
	}
	cout << ((k <= M) ? answer[k] : (answer[M] + (k - M) * mp.size())) << endl;
	return 0;
}
