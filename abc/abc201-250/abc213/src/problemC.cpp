#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int h, w, n;
	cin >> h >> w >> n;
	vector<int> a(n), b(n);
	set<int> sa, sb;
	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
		sa.insert(a[i]);
		sb.insert(b[i]);
	}
	map<int, int> ma, mb;
	int cnt = 1;
	for (int ai : sa) {
		ma[ai] = cnt++;
	}
	cnt = 1;
	for (int bi : sb) {
		mb[bi] = cnt++;
	}
	for (int i = 0; i < n; i++) {
		cout << ma[a[i]] << " " << mb[b[i]] << endl;
	}
	return 0;
}
