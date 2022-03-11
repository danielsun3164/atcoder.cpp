#include <bits/stdc++.h>
using namespace std;

int d;
vector<int> l, r;

int calc(int s, int t) {
	bool increase = t > s;
	for (int i = 0; i < d; i++) {
		if ((l[i] <= s) && (s <= r[i])) {
			if ((l[i] <= t) && (t <= r[i])) {
				return i + 1;
			}
			s = increase ? r[i] : l[i];
		}
	}
	return d;
}

int main(void) {
	int n, k;
	cin >> n >> d >> k;
	l.resize(d);
	r.resize(d);
	for (int i = 0; i < d; i++) {
		cin >> l[i] >> r[i];
		l[i]--;
		r[i]--;
	}
	while (k--) {
		int s, t;
		cin >> s >> t;
		cout << calc(s - 1, t - 1) << endl;
	}
	return 0;
}
