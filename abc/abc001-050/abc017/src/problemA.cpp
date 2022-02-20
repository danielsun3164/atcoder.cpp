#include <bits/stdc++.h>
using namespace std;

const int N = 3;

int main(void) {
	int ans = 0;
	for (int i = 0; i < N; i++) {
		int s, e;
		cin >> s >> e;
		ans += s * e / 10;
	}
	cout << ans << endl;
	return 0;
}
