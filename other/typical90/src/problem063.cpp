#include <bits/stdc++.h>
using namespace std;

int calc(int h, int w, vector<vector<int>> &p, int bit) {
	int result = 0;
	map<int, int> mp;
	for (int i = 0; i < w; i++) {
		set<int> st;
		for (int j = 0; j < h; j++) {
			if (bit & (1 << j)) {
				st.insert(p[j][i]);
			}
		}
		if (1 == st.size()) {
			mp[*st.begin()] += __builtin_popcount(bit);
			result = max(result, mp[*st.begin()]);
		}
	}
	return result;
}

int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<int>> p(h, vector<int>(w));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> p[i][j];
		}
	}
	int answer = 0;
	for (int i = 1; i < (1 << h); i++) {
		answer = max(answer, calc(h, w, p, i));
	}
	cout << answer << endl;
	return 0;
}
