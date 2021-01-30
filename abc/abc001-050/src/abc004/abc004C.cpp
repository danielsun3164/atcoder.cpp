#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s("123456");
	int n;
	cin >> n;
	n %= 450;
	for (int i = 0; i < n; i++) {
		swap(s[i % 5], s[i % 5 + 1]);
	}
	cout << s << endl;
	return 0;
}
