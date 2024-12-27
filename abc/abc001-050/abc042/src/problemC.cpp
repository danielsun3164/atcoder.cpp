#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	set<char> d;
	for (int i = 0; i < k; i++) {
		char c;
		cin >> c;
		d.insert(c);
	}
	for (int i = n;; i++) {
		string s = to_string(i);
		bool ok = true;
		for (char si : s) {
			if (d.contains(si)) {
				ok = false;
				break;
			}
		}
		if (ok) {
			cout << s << endl;
			break;
		}
	}
	return 0;
}
