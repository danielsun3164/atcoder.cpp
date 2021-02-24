#include <bits/stdc++.h>
using namespace std;

const array<int, 4> XS = { 0, 0, 1, 1 };
const array<int, 4> YS = { 0, 1, 0, 1 };
const char BLACK = '#';

int count(int i, int j, vector<string> &s) {
	int count = 0;
	for (unsigned long int k = 0; k < XS.size(); k++) {
		if (BLACK == s[i + XS[k]][j + YS[k]]) {
			count++;
		}
	}
	return count;
}

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<string> s(h);
	for (int i = 0; i < h; i++) {
		cin >> s[i];
	}
	int ans = 0;
	for (int i = 0; i < h - 1; i++) {
		for (int j = 0; j < w - 1; j++) {
			if (1 == (1 & count(i, j, s))) {
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
