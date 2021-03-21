#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dfs(int i, int bit, int h, int w, int a, int b, int ans) {
	if (i == h * w) {
		return ans + 1;
	}
	if (bit & (1 << i)) {
		return dfs(i + 1, bit, h, w, a, b, ans);
	}
	if (b) {
		ans = dfs(i + 1, bit | 1 << i, h, w, a, b - 1, ans);
	}
	if (a) {
		if ((i % w < w - 1) && (0 == (bit & (1 << i)))) {
			ans = dfs(i + 1, bit | 1 << i | 1 << (i + 1), h, w, a - 1, b, ans);
		}
		if (i + w < h * w) {
			ans = dfs(i + 1, bit | 1 << i | 1 << (i + w), h, w, a - 1, b, ans);
		}
	}
	return ans;
}

int main(void) {
	int h, w, a, b;
	cin >> h >> w >> a >> b;
	cout << dfs(0, 0, h, w, a, b, 0) << endl;
	return 0;
}
