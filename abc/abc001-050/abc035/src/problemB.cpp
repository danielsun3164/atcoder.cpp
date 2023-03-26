#include <bits/stdc++.h>
using namespace std;

static map<char, pair<int, int>> MAP = { { 'L', { -1, 0 } }, { 'R', { 1, 0 } }, { 'U', { 0, 1 } }, { 'D', { 0, -1 } } };
const static char QUESTION = '?';

template<typename T, typename U>
pair<T, U> operator+(const pair<T, U> &l, const pair<T, U> &r) {
	return {l.first+r.first,l.second+r.second};
}

int main(void) {
	string s;
	int t;
	cin >> s >> t;
	int q = 0;
	pair<int, int> p = { 0, 0 };
	for (char c : s) {
		if (QUESTION == c) {
			q++;
		} else {
			p = p + MAP[c];
		}
	}
	int d = abs(p.first) + abs(p.second);
	if (1 == t) {
		cout << (d + q) << endl;
	} else {
		cout << ((d > q) ? (d - q) : ((q - d) & 1)) << endl;
	}
	return 0;
}
