#include <bits/stdc++.h>
using namespace std;

const static char BLACK = '#';
const static char WHITE = '.';
const static vector<int> XS { 1, 1, 1, 0, 0, -1, -1, -1 };
const static vector<int> YS { -1, 0, 1, -1, 1, -1, 0, 1 };

vector<string> convert(vector<string> &t) {
	int h = t.size(), w = t[0].size();
	vector<string> v(h, string(w, WHITE));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			int black_count = 0, white_count = 0;
			for (int k = 0; k < int(XS.size()); k++) {
				int nx = i + XS[k], ny = j + YS[k];
				if ((nx >= 0) && (nx < h) && (ny >= 0) && (ny < w)) {
					if (BLACK == t[nx][ny]) {
						black_count++;
					} else {
						white_count++;
					}
				}
			}
			v[i][j] = (0 == black_count) ? t[i][j] : BLACK;
		}
	}
	return v;
}

vector<string> revert(vector<string> &t) {
	int h = t.size(), w = t[0].size();
	vector<string> v(h, string(w, WHITE));
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			int black_count = 0, white_count = 0;
			for (int k = 0; k < int(XS.size()); k++) {
				int nx = i + XS[k], ny = j + YS[k];
				if ((nx >= 0) && (nx < h) && (ny >= 0) && (ny < w)) {
					if (BLACK == t[nx][ny]) {
						black_count++;
					} else {
						white_count++;
					}
				}
			}
			v[i][j] = (0 == white_count) ? t[i][j] : WHITE;
		}
	}
	return v;
}

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<string> s(h);
	for (string &si : s) {
		cin >> si;
	}
	vector<string> t = revert(s);
	vector<string> s2 = convert(t);
	if (s == s2) {
		cout << "possible" << endl;
		for (string ti : t) {
			cout << ti << endl;
		}
	} else {
		cout << "impossible" << endl;
	}
	return 0;
}
