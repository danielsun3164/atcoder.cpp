#include <bits/stdc++.h>
using namespace std;

const char ZERO = '0';

int main(void) {
	string n;
	cin >> n;
	// 末尾の0を削除する
	while (*n.rbegin() == ZERO) {
		n = n.substr(0, n.length() - 1);
	}
	string nn = n;
	reverse(nn.begin(), nn.end());
	cout << ((nn == n) ? "Yes" : "No") << endl;
	return 0;
}
