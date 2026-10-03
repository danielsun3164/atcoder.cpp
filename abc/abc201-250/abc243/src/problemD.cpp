#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const char UP = 'U';
const char LEFT = 'L';

int main(void) {
	int n;
	ll x;
	string s;
	cin >> n >> x >> s;
	deque<char> que;
	for (int i = 0; i < n; i++) {
		if (UP == s[i]) {
			if (que.empty()) {
				x >>= 1;
			} else {
				que.pop_back();
			}
		} else {
			que.push_back(s[i]);
		}
	}
	while (!que.empty()) {
		char c = que.front();
		que.pop_front();
		x <<= 1;
		x += (LEFT == c) ? 0 : 1;
	}
	cout << x << endl;
	return 0;
}
