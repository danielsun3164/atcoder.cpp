#include <bits/stdc++.h>
using namespace std;
using ll = long long;

/*
 * cpp_intを使わない実装
 */
int main(void) {
	int n, a;
	string k;
	cin >> n >> a >> k;
	a--;
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		b[i]--;
	}
	vector<int> v;
	vector<bool> used(n, false);
	while (!used[a]) {
		v.emplace_back(a);
		used[a] = true;
		a = b[a];
	}
	int t = distance(v.begin(), find(v.begin(), v.end(), a));
	int c = v.size() - t;
	int ik = 0;
	if (k.size() <= 8) {
		ik = stoi(k);
	} else {
		int rem = 0;
		for (int i = 0; i < int(k.size()); i++) {
			rem = (rem * 10 + k[i] - '0') % c;
		}
		ik = rem + (t + c - 1) / c * c;
	}
	int idx = int((ik >= t) ? (ik - t) % c + t : ik);
	cout << (v[idx] + 1) << endl;
	return 0;
}
