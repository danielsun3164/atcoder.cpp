#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	int q;
	cin >> s >> q;
	deque<char> ans(s.begin(), s.end());
	bool rev = false;
	while (q--) {
		int t;
		cin >> t;
		if (1 == t) {
			rev = !rev;
		} else {
			int f;
			char c;
			cin >> f >> c;
			f = (rev) ? 3 - f : f;
			if (1 == f) {
				ans.emplace_front(c);
			} else {
				ans.emplace_back(c);
			}
		}
	}
	if (rev) {
		for (auto itr = ans.rbegin(); itr < ans.rend(); itr++) {
			cout << *itr;
		}
	} else {
		for (auto itr = ans.begin(); itr < ans.end(); itr++) {
			cout << *itr;
		}
	}
	cout << endl;
	return 0;
}
