#include <bits/stdc++.h>
using namespace std;

const static int N = 26;

int main(void) {
	string s, t;
	cin >> s >> t;
	int d = t[0] - s[0];
	for (int i = 0; i < int(s.length()); i++) {
		s[i] += d;
		if (s[i] < 'a') {
			s[i] += N;
		}
		if (s[i] > 'z') {
			s[i] -= N;
		}
	}
	cout << ((s == t) ? "Yes" : "No") << endl;
	return 0;
}
