#include <bits/stdc++.h>
using namespace std;

const int N = 5;
const int ALL = 0b11111;

bool ok(int n, vector<vector<int>> &a, int value) {
	set<int> s;
	for (int i = 0; i < n; i++) {
		int bit = 0;
		for (int j = 0; j < N; j++) {
			bit |= (a[i][j] >= value) ? 1 << j : 0;
		}
		s.insert(bit);
	}
	for (int x : s) {
		for (int y : s) {
			for (int z : s) {
				if (ALL == (x | y | z)) {
					return true;
				}
			}
		}
	}
	return false;
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> a(n, vector<int>(N));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < N; j++) {
			cin >> a[i][j];
		}
	}
	int left = 0, right = 1'000'000'001;
	while (right > left + 1) {
		int med = (left + right) >> 1;
		if (ok(n, a, med)) {
			left = med;
		} else {
			right = med;
		}
	}
	cout << left << endl;
	return 0;
}
