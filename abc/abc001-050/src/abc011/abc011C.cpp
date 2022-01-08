#include <bits/stdc++.h>
using namespace std;

const int N = 300;
const int M = 3;

int main(void) {
	vector<int> ans(N + 1, N);
	ans[0] = 0;
	int n;
	cin >> n;
	for (int i = 0; i < M; i++) {
		int ng;
		cin >> ng;
		ans[ng] = -1;
	}
	for (int i = 1; i <= n; i++) {
		if (-1 != ans[i]) {
			for (int j = max(0, i - M); j < i; j++) {
				if (ans[j] != -1) {
					ans[i] = min(ans[i], ans[j] + 1);
				}
			}
		}
	}
	cout << (((ans[n] != -1) && (ans[n] <= 100)) ? "YES" : "NO") << endl;
	return 0;
}
