#include <bits/stdc++.h>
using namespace std;

const char PLUS = '+';
const char MINUS = '-';
const char MOVE = 'M';

int main(void) {
	string s;
	cin >> s;
	int n = s.size();
	vector<int> pc(n), mc(n), v;
	for (int i = n - 1; i >= 0; i--) {
		pc[i] = ((i < n - 1) ? pc[i + 1] : 0) + ((s[i] == PLUS) ? 1 : 0);
		mc[i] = ((i < n - 1) ? mc[i + 1] : 0) + ((s[i] == MINUS) ? 1 : 0);
		if (MOVE == s[i]) {
			v.emplace_back(pc[i] - mc[i]);
		}
	}
	sort(v.begin(), v.end());
	int m = v.size();
	cout << (accumulate(v.begin() + m / 2, v.end(), 0) - accumulate(v.begin(), v.begin() + m / 2, 0)) << endl;
	return 0;
}
