#include <bits/stdc++.h>
using namespace std;

const static int N = 8;
const static int M = 5;
const static vector<int> XS = {1, 1, -1, -1, 2, 2, -2, -2};
const static vector<int> YS = {2, -2, 2, -2, 1, -1, 1, -1};

int main(void) {
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	for (int i = 0; i < N; i++) {
		int nx = x1 + XS[i], ny = y1 + YS[i];
		if (M == (nx - x2) * (nx - x2) + (ny - y2) * (ny - y2)) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
