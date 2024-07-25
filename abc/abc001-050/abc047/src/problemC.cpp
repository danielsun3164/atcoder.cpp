#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	int n = s.length(), count = 0;
	char prev = s[0];
	for (int i = 1; i < n; i++) {
		if (prev != s[i]) {
			count++;
			prev = s[i];
		}
	}
	cout << count << endl;
	return 0;
}
