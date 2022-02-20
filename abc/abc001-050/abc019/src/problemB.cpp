#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	string res = "";
	char prev = s[0];
	int count = 1;
	for (int i = 1; i < int(s.size()); i++) {
		if (s[i] == prev) {
			count++;
		} else {
			res += prev + to_string(count);
			prev = s[i];
			count = 1;
		}
	}
	res += prev + to_string(count);
	cout << res << endl;
	return 0;
}
