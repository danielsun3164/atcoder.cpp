#include <bits/stdc++.h>
using namespace std;

const static int N = 4;

int main(void) {
	vector<vector<char>> s(N, vector<char>(N));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> s[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (j) {
				cout << " ";
			}
			cout << s[N - 1 - i][N - 1 - j];
		}
		cout << endl;
	}
	return 0;
}
