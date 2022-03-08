#include <bits/stdc++.h>
using namespace std;

const int N = 2019;

int main(void) {
	string s;
	cin >> s;
	vector<int> count(N, 0);
	count[0] = 1;
	int ans = 0, pre = 0, pow = 1;
	for (int i = s.size() - 1; i >= 0; i--) {
		int now = ((s[i] - '0') * pow + pre) % N;
		ans += count[now];
		count[now]++;
		pre = now;
		pow = pow * 10 % N;
	}
	cout << ans << endl;
	return 0;
}
