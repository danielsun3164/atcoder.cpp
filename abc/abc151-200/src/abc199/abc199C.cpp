#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, q;
	string s;
	cin >> n >> s >> q;
	vector<string> vs(2);
	vs[0] = s.substr(0, n);
	vs[1] = s.substr(n);
	for (int i = 0; i < q; i++) {
		int t, a, b;
		cin >> t >> a >> b;
		a--;
		b--;
		if (1 == t) {
			swap(vs[a / n][a % n], vs[b / n][b % n]);
		} else {
			swap(vs[0], vs[1]);
		}
	}
	cout << vs[0] << vs[1] << endl;
	return 0;
}
