#include <bits/stdc++.h>
using namespace std;

const char SHARP = '#';

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<string> c(h), c2;
	c2.emplace_back(string(w + 2, SHARP));
	for (int i = 0; i < h; i++) {
		cin >> c[i];
		c2.emplace_back(SHARP + c[i] + SHARP);
	}
	c2.emplace_back(string(w + 2, SHARP));
	for (string &s : c2) {
		cout << s << endl;
	}
	return 0;
}
