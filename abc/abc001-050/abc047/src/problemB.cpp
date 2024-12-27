#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int w, h, n;
	cin >> w >> h >> n;
	set<int> min_x_set, max_x_set, min_y_set, max_y_set;
	while (n--) {
		int x, y, a;
		cin >> x >> y >> a;
		if (1 == a) {
			min_x_set.insert(x);
		} else if (2 == a) {
			max_x_set.insert(x);
		} else if (3 == a) {
			min_y_set.insert(y);
		} else {
			max_y_set.insert(y);
		}
	}
	int min_x = min_x_set.empty() ? 0 : *min_x_set.rbegin(),
		max_x = max_x_set.empty() ? w : *max_x_set.begin(),
		min_y = min_y_set.empty() ? 0 : *min_y_set.rbegin(),
		max_y = max_y_set.empty() ? h : *max_y_set.begin();
	cout << (max(0, max_x - min_x) * max(0, max_y - min_y)) << endl;
	return 0;
}
