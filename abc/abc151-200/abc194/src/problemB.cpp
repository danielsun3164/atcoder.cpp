#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<pair<int, int>> pa(n), pb(n);
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		pa[i] = {a, i};
		pb[i] = {b, i};
	}
	sort(pa.begin(), pa.end());
	sort(pb.begin(), pb.end());
	int ans;
	if (pa[0].second != pb[0].second) {
		ans = max(pa[0].first, pb[0].first);
	} else {
		ans = min(pa[0].first + pb[0].first,
				  min(max(pa[0].first, pb[1].first), max(pa[1].first, pb[0].first)));
	}
	cout << ans << endl;
	return 0;
}
