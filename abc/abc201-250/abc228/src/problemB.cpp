#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, x;
	cin >> n >> x;
	vector<int> a(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	vector<bool> used(n + 1, false);
	while (!used[x]) {
		used[x] = true;
		x = a[x];
	}
	int answer = 0;
	for (int i = 1; i <= n; i++) {
		if (used[i]) {
			answer++;
		}
	}
	cout << answer << endl;
	return 0;
}
