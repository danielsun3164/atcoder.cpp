#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint1000000007;

const static char LEFT = 'L';
const static char RIGHT = 'R';
const static char UP = 'U';
const static char DOWN = 'D';

char opp(char m) {
	if (DOWN == m) {
		return UP;
	} else if (UP == m) {
		return DOWN;
	} else if (LEFT == m) {
		return RIGHT;
	} else {
		return LEFT;
	}
}

int main(void) {
	int sx, sy, tx, ty;
	cin >> sx >> sy >> tx >> ty;
	string answer;
	if (sx == tx) {
		int dy = abs(sy - ty);
		char m = (sy > ty) ? DOWN : UP;
		answer.append(string(dy, m));
		answer.push_back(LEFT);
		answer.append(string(dy, opp(m)));
		answer.append(string(2, RIGHT));
		answer.append(string(dy, m));
		answer.append(string({LEFT, m, LEFT, LEFT}));
		answer.append(string(dy + 2, opp(m)));
		answer.append(string(2, RIGHT) + m);
	} else if (sy == ty) {
		int dx = abs(sx - tx);
		char m = (sx > tx) ? LEFT : RIGHT;
		answer.append(string(dx, m));
		answer.push_back(DOWN);
		answer.append(string(dx, opp(m)));
		answer.append(string(2, UP));
		answer.append(string(dx, m));
		answer.append(string({DOWN, m, DOWN, DOWN}));
		answer.append(string(dx + 2, opp(m)));
		answer.append(string(2, UP) + m);
	} else {
		int dx = abs(sx - tx), dy = abs(sy - ty);
		char ym = (sy > ty) ? DOWN : UP;
		answer.append(string(dy, ym));
		char xm = (sx > tx) ? LEFT : RIGHT;
		answer.append(string(dx, xm));
		answer.append(string(dy, opp(ym)));
		answer.append(string(dx + 1, opp(xm)));
		answer.append(string(dy + 1, ym));
		answer.append(string(dx + 1, xm));
		answer.append(string{opp(ym), xm});
		answer.append(string(dy + 1, opp(ym)));
		answer.append(string(dx + 1, opp(xm)));
		answer.push_back(ym);
	}
	cout << answer << endl;
	return 0;
}
