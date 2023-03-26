#include <bits/stdc++.h>
using namespace std;

const static int N = 5'001;

int main() {
	int n, k;
	cin >> n >> k;
	vector<vector<int>> count(N, vector<int>(N, 0));
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		count[a][b]++;
	}
	vector<vector<int>> sum(N, vector<int>(N, 0));
	for (int i = 1; i < N; i++) {
		for (int j = 1; j < N; j++) {
			sum[i][j] = sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + count[i][j];
		}
	}
	int answer = 0;
	for (int i = k + 1; i < N; i++) {
		for (int j = k + 1; j < N; j++) {
			answer = max(answer, sum[i][j] + sum[i - k - 1][j - k - 1] - sum[i - k - 1][j] - sum[i][j - k - 1]);
		}
	}
	cout << answer << endl;
	return 0;
}
