#include <bits/stdc++.h>
using namespace std;

const int N = 10;

int first_digit(int n) {
	while (n >= N) {
		n /= N;
	}
	return n;
}

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> c(N, vector<int>(N, 0));
	for (int i = 1; i <= n; i++) {
		c[first_digit(i)][i % N]++;
	}
	int ans = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			ans += c[i][j] * c[j][i];
		}
	}
	cout << ans << endl;
	return 0;
}
