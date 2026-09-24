#include <bits/stdc++.h>
using namespace std;

const char BLACK = '#';
const int N = 6;

int main(void) {
	int n;
	cin >> n;
	vector<string> s(n);
	for (string &si : s) {
		cin >> si;
	}
	vector<vector<int>> sum1(n + 1, vector<int>(n + 1, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum1[i + 1][j + 1] =
				sum1[i + 1][j] + sum1[i][j + 1] - sum1[i][j] + ((BLACK == s[i][j]) ? 1 : 0);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= n - N; j++) {
			if ((sum1[i + 1][j + N] - sum1[i][j + N] + sum1[i][j] - sum1[i + 1][j] >= N - 2) ||
				(sum1[j + N][i + 1] - sum1[j + N][i] + sum1[j][i] - sum1[j][i + 1] >= N - 2)) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	vector<vector<int>> sum2(n + 1, vector<int>(n + 1, 0)), sum3(n + 1, vector<int>(n + 1, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum2[i + 1][j + 1] = sum2[i][j] + ((BLACK == s[i][j]) ? 1 : 0);
			sum3[i + 1][n - j - 1] = sum3[i][n - j] + ((BLACK == s[i][n - j - 1]) ? 1 : 0);
		}
	}
	for (int i = 0; i <= n - N; i++) {
		for (int j = 0; j <= n - N; j++) {
			if ((sum2[i + N][j + N] - sum2[i][j] >= N - 2) ||
				(sum3[i + N][n - j - N] - sum3[i][n - j] >= N - 2)) {
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}
