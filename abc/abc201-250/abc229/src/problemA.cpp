#include <bits/stdc++.h>
using namespace std;

const static int N = 2;
const static char BLACK = '#';
const static vector<int> XS{0, 0, 1, -1};
const static vector<int> YS{1, -1, 0, 0};

int main(void) {
	vector<string> s(N);
	for (string &si : s) {
		cin >> si;
	}
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < N; y++) {
			if (BLACK == s[x][y]) {
				int count = 0;
				for (int i = 0; i < int(XS.size()); i++) {
					int nx = x + XS[i], ny = y + YS[i];
					if ((nx >= 0) && (nx < N) && (ny >= 0) && (ny < N) && (BLACK == s[nx][ny])) {
						count++;
					}
				}
				if (0 == count) {
					cout << "No" << endl;
					return 0;
				}
			}
		}
	}
	cout << "Yes" << endl;
	return 0;
}
