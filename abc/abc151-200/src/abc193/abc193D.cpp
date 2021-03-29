#include <bits/stdc++.h>
using namespace std;

static const int N = 10;

int calc(vector<int> &s) {
	int ans = 0;
	for (long unsigned int i = 0; i < s.size(); i++) {
		ans += i * (int) pow(10, s[i]);
	}
	return ans;
}

int main(void) {
	int k;
	string s, t;
	cin >> k >> s >> t;
	vector<int> c(N, k), cs(N), ct(N);
	for (int i = 0; i < 4; i++) {
		cs[s[i] - '0']++;
		ct[t[i] - '0']++;
		c[s[i] - '0']--;
		c[t[i] - '0']--;
	}
	int sum = 9 * k - 8;
	double ans = 0.0;
	for (int i = 1; i < N; i++) {
		if (c[i] > 0) {
			double ps = c[i] * 1.0 / sum;
			c[i]--;
			cs[i]++;
			sum--;
			for (int j = 1; j < N; j++) {
				if (c[j] > 0) {
					ct[j]++;
					if (calc(cs) > calc(ct)) {
						ans += ps * c[j] / sum;
					}
					ct[j]--;
				}
			}
			sum++;
			cs[i]--;
			c[i]++;
		}
	}
	cout << ans << endl;
	return 0;
}
