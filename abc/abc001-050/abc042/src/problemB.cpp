#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, l;
	cin >> n >> l;
	vector<string> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s.begin(), s.end());
	for (string si : s) {
		cout << si;
	}
	cout << endl;
	return 0;
}