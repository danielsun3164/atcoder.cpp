#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s, buf;
	cin >> s;
	stringstream ss{s};
	int ans = 0;
	while (getline(ss, buf, '+')) {
		ans += count(buf.begin(), buf.end(), '0') ? 0 : 1;
	}
	cout << ans << endl;
	return 0;
}
