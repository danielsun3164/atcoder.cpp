#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

vector<vector<ll>> c;

void init(int n) {
	c.resize(n + 1, vector<ll>(n + 1, 0LL));
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if ((j == 0) || (j == i)) {
				c[i][j] = 1LL;
			} else {
				c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
			}
		}
	}
}

int main(void) {
	int n, a, b;
	cin >> n >> a >> b;
	init(n);
	vector<ll> v(n);
	for (ll &vi : v) {
		cin >> vi;
	}
	sort(v.rbegin(), v.rend());
	ld average = 0.0;
	for (int i = 0; i < a; i++) {
		average += v[i];
	}
	average /= a;

	int a_th_val_num = 0, a_th_val_pos = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] == v[a - 1]) {
			a_th_val_num++;
			if (i < a) {
				a_th_val_pos++;
			}
		}
	}

	ll count = 0LL;
	if (a_th_val_pos == a) {
		for (; a_th_val_pos <= b; a_th_val_pos++) {
			count += c[a_th_val_num][a_th_val_pos];
		}
	} else {
		count += c[a_th_val_num][a_th_val_pos];
	}

	cout.precision(20);
	cout << fixed << average << endl;
	cout << count << endl;
	return 0;
}
