#include <bits/stdc++.h>
using namespace std;

const int RED = -100;
const int GREEN = 0;
const int BLUE = 100;

int solve(int n, int p, int b) {
	if (p > b) {
		return ((p - b) + (p + n - 1 - b)) * n / 2;
	} else if (p + n - 1 < b) {
		return ((b - p) + (b - p - n + 1)) * n / 2;
	} else {
		return (b - p) * (b - p + 1) / 2 + (p + n - 1 - b) * (p + n - b) / 2;
	}
}

int solve_red(int r, int p) {
	return solve(r, RED + min(p - RED, r / 2) - r + 1, RED);
}

int solve_green(int g, int p) {
	return solve(g, p, GREEN);
}

int solve_blue(int b, int p) {
	return solve(b, BLUE - min(BLUE - p, b / 2), BLUE);
}

int main(void) {
	int r, g, b;
	cin >> r >> g >> b;
	int ans = INT_MAX;
	for (int i = -300; i <= 100; i++) {
		ans = min(ans, solve_red(r, i - 1) + solve_green(g, i) + solve_blue(b, i + g));
	}
	cout << ans << endl;
	return 0;
}
