#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 3;

bool check(ll x, ll y, ll now, vector<ll> remain);

vector<ll> filter(vector<ll> &a, int index) {
	vector<ll> v;
	for (int i = 0; i < int(a.size()); i++) {
		if (index != i) {
			v.emplace_back(a[i]);
		}
	}
	return v;
}

bool check(ll x, ll y, vector<ll> v) {
	int size = v.size();
	if (1 == size) {
		return x * y >= v[0];
	}
	return check(x, y, v[0], filter(v, 0));
}

bool check(ll x, ll y, ll now, vector<ll> remain) {
	if ((x <= 0) || (y <= 0)) {
		return false;
	}
	ll ny = y - (now + x - 1) / x;
	if (check(x, ny, remain)) {
		return true;
	}
	ll nx = x - (now + y - 1) / y;
	return check(nx, y, remain);
}

int main(void) {
	ll x, y;
	cin >> x >> y;
	vector<ll> a(N);
	for (ll &ai : a) {
		cin >> ai;
	}
	for (int i = 0; i < N; i++) {
		if (check(x, y, a[i], filter(a, i))) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
