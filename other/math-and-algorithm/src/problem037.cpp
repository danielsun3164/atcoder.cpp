#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll cross(ll ax, ll ay, ll bx, ll by) {
	return ax * by - ay * bx;
}

int main() {
	ll x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	ll ans1 = cross(x2 - x1, y2 - y1, x3 - x1, y3 - y1),
	   ans2 = cross(x2 - x1, y2 - y1, x4 - x1, y4 - y1),
	   ans3 = cross(x4 - x3, y4 - y3, x1 - x3, y1 - y3),
	   ans4 = cross(x4 - x3, y4 - y3, x2 - x3, y2 - y3);
	if ((0LL == ans1) && (0LL == ans2) && (0LL == ans3) && (0LL == ans4)) {
		pair<ll, ll> a = {x1, y1}, b = {x2, y2}, c = {x3, y3}, d = {x4, y4};
		if (a > b) {
			swap(a, b);
		}
		if (c > d) {
			swap(c, d);
		}
		cout << ((max(a, c) <= min(b, d)) ? "Yes" : "No") << endl;
		return 0;
	}
	bool is_ab = ((ans1 >= 0) && (ans2 <= 0)) || ((ans1 <= 0) && (ans2 >= 0)),
		 is_cd = ((ans3 >= 0) && (ans4 <= 0)) || ((ans3 <= 0) && (ans4 >= 0));
	cout << ((is_ab && is_cd) ? "Yes" : "No") << endl;
	return 0;
}
