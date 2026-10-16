#include <bits/stdc++.h>
using namespace std;

const char S = 'S';
const int N = 4;
const vector<vector<int>> D{{1, 0}, {0, -1}, {-1, 0}, {0, 1}};

int main(void) {
	int n, x = 0, y = 0, index = 0;
	string t;
	cin >> n >> t;
	for (int i = 0; i < n; i++) {
		if (S == t[i]) {
			x += D[index][0];
			y += D[index][1];
		} else {
			index = (index + 1) % N;
		}
	}
	cout << x << " " << y << endl;
	return 0;
}
