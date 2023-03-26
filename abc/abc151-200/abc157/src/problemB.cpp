#include <bits/stdc++.h>
using namespace std;

const int N = 3;

int main(void) {
	vector<vector<int>> a(N, vector<int>(N));
	map<int, int> m;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a[i][j];
			m[a[i][j]] = i * N + j;
		}
	}
	int n;
	cin >> n;
	vector<vector<bool>> open(N, vector<bool>(N, false));
	for (int i = 0; i < n; i++) {
		int b;
		cin >> b;
		if (m.find(b) != m.end()) {
			open[m[b] / N][m[b] % N] = true;
		}
	}
	bool naname1 = true, naname2 = true;
	for (int i = 0; i < N; i++) {
		bool tate = true, yoko = true;
		for (int j = 0; j < N; j++) {
			tate = tate && open[j][i];
			yoko = yoko && open[i][j];
		}
		if (tate || yoko) {
			cout << "Yes" << endl;
			return 0;
		}
		naname1 = naname1 && open[i][i];
		naname2 = naname2 && open[i][N - 1 - i];
	}
	cout << ((naname1 || naname2) ? "Yes" : "No") << endl;
	return 0;
}
