#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int x, y, a, b, c;
	cin >> x >> y >> a >> b >> c;
	vector<int> p(a), q(b), r(c);
	for (int i = 0; i < a; i++) {
		cin >> p[i];
	}
	for (int i = 0; i < b; i++) {
		cin >> q[i];
	}
	for (int i = 0; i < c; i++) {
		cin >> r[i];
	}
	sort(p.begin(), p.end(), greater<>());
	sort(q.begin(), q.end(), greater<>());
	sort(r.begin(), r.end(), greater<>());
	vector<int> ans;
	ans.insert(ans.end(), p.begin(), p.begin() + x);
	ans.insert(ans.end(), q.begin(), q.begin() + y);
	ans.insert(ans.end(), r.begin(), r.begin() + min(c, x + y));
	sort(ans.begin(), ans.end(), greater<>());
	cout << accumulate(ans.begin(), ans.begin() + (x + y), 0LL) << endl;
	return 0;
}
