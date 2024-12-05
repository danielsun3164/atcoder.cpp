#include <bits/stdc++.h>
using namespace std;

const static char LEFT = 'L';

int main(void) {
	int n;
	string s;
	cin >> n >> s;
	deque<int> que;
	que.push_back(n);
	for (int i = n - 1; i >= 0; i--) {
		if (LEFT == s[i]) {
			que.push_back(i);
		} else {
			que.push_front(i);
		}
	}
	for (int i = 0; i <= n; i++) {
		cout << (i ? " " : "") << que[i];
	}
	cout << endl;
	return 0;
}
