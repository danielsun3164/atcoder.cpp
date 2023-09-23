#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	priority_queue<ll> l_que;
	priority_queue<ll, vector<ll>, greater<ll>> r_que;
	for (int i = 0; i < n; i++) {
		l_que.push(0);
		r_que.push(0);
	}
	int last = 0;
	ll add_l = 0LL, add_r = 0LL, answer = 0LL;
	while (n--) {
		int t, d;
		ll x;
		cin >> t >> d >> x;
		add_l -= t - last;
		add_r += t - last;
		last = t;
		if (0 == d) {
			ll r0 = r_que.top();
			if (x > r0 + add_r) {
				answer += x - (r0 + add_r);
			}
			r_que.push(x - add_r);
			l_que.push(r_que.top() + add_r - add_l);
			r_que.pop();
		} else {
			ll l0 = l_que.top();
			if (x <= l0 + add_l) {
				answer += l0 + add_l - x;
			}
			l_que.push(x - add_l);
			r_que.push(l_que.top() + add_l - add_r);
			l_que.pop();
		}
	}
	cout << answer << endl;
	return 0;
}
