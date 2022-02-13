#include <bits/stdc++.h>
using namespace std;

const regex RE("(ch|o|k|u)*");

int main(void) {
	string s;
	int n;
	cin >> s >> n;
	while (n--) {
		int l, r;
		cin >> l >> r;
		l--;
		r--;
		while (r > l) {
			swap(s[l], s[r]);
			l++;
			r--;
		}
	}
	cout << s << endl;
	return 0;
}
