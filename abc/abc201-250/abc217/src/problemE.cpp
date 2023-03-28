#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int q;
	cin >> q;
	queue<int> que1;
	priority_queue<int, vector<int>, greater<int>> que2;
	while (q--) {
		int t;
		cin >> t;
		if (1 == t) {
			int x;
			cin >> x;
			que1.push(x);
		} else if (2 == t) {
			if (que2.empty()) {
				cout << que1.front() << endl;
				que1.pop();
			} else {
				cout << que2.top() << endl;
				que2.pop();
			}
		} else {
			while (!que1.empty()) {
				que2.push(que1.front());
				que1.pop();
			}
		}
	}
	return 0;
}
