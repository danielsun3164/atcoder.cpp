#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;
using ll = long long;

const static ll N = 1'000'000'000'000'000'000LL;
const static int TEN = 10;

vector<ll> init() {
	vector<ll> v;
	v.emplace_back(0LL);
	ll now = 1LL;
	while (now <= N) {
		now *= TEN;
		v.emplace_back(now - 1);
	}
	return v;
}

int main(void) {
	ll n;
	cin >> n;
	vector<ll> v = init();
	int index = 0;
	mint answer = 0;
	while (v[index] < n) {
		ll d = min(v[index + 1], n) - v[index];
		answer += mint(d) * mint(d + 1) / 2;
		index++;
	}
	cout << answer.val() << endl;
	return 0;
}
