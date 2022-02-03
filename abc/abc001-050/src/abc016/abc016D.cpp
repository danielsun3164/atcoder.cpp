#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int ax, ay, bx, by, n;
	cin >> ax >> ay >> bx >> by >> n;
	vector<int> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	int res = 0;
	// https://qiita.com/zu_rin/items/e04fdec4e3dec6072104 を参考に交差を判定
	for (int i = 0; i < n; i++) {
		int i2 = (i + 1) % n;
		ll s1 = (x[i] - x[i2]) * (ay - y[i]) - (y[i] - y[i2]) * (ax - x[i]);
		ll t1 = (x[i] - x[i2]) * (by - y[i]) - (y[i] - y[i2]) * (bx - x[i]);
		ll s2 = (ax - bx) * (y[i] - ay) - (ay - by) * (x[i] - ax);
		ll t2 = (ax - bx) * (y[i2] - ay) - (ay - by) * (x[i2] - ax);
		if ((s1 * t1 < 0) && (s2 * t2 < 0)) {
			res++;
		}
	}
	cout << ((res >> 1) + 1) << endl;
	return 0;
}
