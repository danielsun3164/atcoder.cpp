#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<int> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	if (0 == *min_element(s.begin(), s.end())) {
		cout << n << endl;
		return 0;
	}
	int ans = 0, prod = 1, left = 0, right = 0;
	while (right < n) {
		if (k / s[right] >= prod) {
			prod *= s[right++];
			ans = max(ans, right - left);
		} else if (left < right) {
			prod /= s[left++];
		} else {
			left++;
			right++;
		}
	}
	cout << ans << endl;
	return 0;
}
