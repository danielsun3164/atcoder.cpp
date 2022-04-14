#include <bits/stdc++.h>
using namespace std;

int calc_score(vector<int> &a, int start, int end, int person) {
	if (end < start) {
		swap(start, end);
	}
	int res = 0;
	for (int i = start; i <= end; i++) {
		if (person == (1 & (i - start))) {
			res += a[i];
		}
	}
	return res;
}

int find_aoki(vector<int> &a, int takahashi) {
	int n = a.size();
	int res = -1, score = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (i != takahashi) {
			int s = calc_score(a, takahashi, i, 1);
			if (s > score) {
				res = i;
				score = s;
			}
		}
	}
	return res;
}

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int ans = INT_MIN;
	for (int i = 0; i < n; i++) {
		ans = max(ans, calc_score(a, i, find_aoki(a, i), 0));
	}
	cout << ans << endl;
	return 0;
}
