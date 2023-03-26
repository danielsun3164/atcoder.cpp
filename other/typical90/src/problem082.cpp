#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint1000000007;

const static int N = 19;

int main() {
	ll l, r;
	cin >> l >> r;
	r++;
	vector<pair<ll, ll>> v;
	v.push_back( { 0, 1 });
	ll now = 1LL;
	for (int i = 1; i <= N; i++) {
		v.push_back( { now, (i == N) ? now + 1 : now * 10 });
		now *= 10;
	}
	mint answer = 0;
	now = l;
	for (int i = 1; i <= N; i++) {
		pair<ll, ll> p = v[i];
		if ((now >= p.first) && (now < p.second)) {
			ll top = min(p.second, r);
			answer += mint(top + now - 1) * mint(top - now) / 2 * i;
			now = p.second;
		}
		if (r <= p.second) {
			break;
		}
	}
	cout << answer.val() << endl;
	return 0;
}
