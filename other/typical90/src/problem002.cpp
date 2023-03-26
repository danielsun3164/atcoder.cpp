#include <bits/stdc++.h>
using namespace std;

set<string> solve(int n) {
	set<string> s;
	if (2 == n) {
		s.insert("()");
		return s;
	}

	for (string t : solve(n - 2)) {
		s.insert("(" + t + ")");
	}
	for (int i = 2; i <= n / 2; i += 2) {
		for (string u : solve(i)) {
			for (string v : solve(n - i)) {
				s.insert(u + v);
				s.insert(v + u);
			}
		}
	}
	return s;
}

int main() {
	int n;
	cin >> n;
	if (0 == (1 & n)) {
		for (string s : solve(n)) {
			cout << s << endl;
		}
	}
	return 0;
}
