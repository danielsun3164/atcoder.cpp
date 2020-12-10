#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v(k);
	for (int i = 0; i < k; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int count = 1, count2 = 1, ans = 1;
	bool hasBlank = (0 == v[0]), useBlank = false;
	for (int i = hasBlank ? 2 : 1; i < k; i++) {
		if (v[i - 1] + 1 == v[i]) {
			ans = max(ans, ++count);
			if (hasBlank) {
				ans = max(ans, ++count2);
			}
		} else if (v[i - 1] + 2 == v[i] && hasBlank) {
			ans = max(ans, count2 = count + 2);
			count = 1;
			useBlank = true;
		} else {
			count = 1;
			count2 = 1;
		}
	}
	cout << ((hasBlank && !useBlank) ? ans + 1 : ans) << endl;
	return 0;
}
