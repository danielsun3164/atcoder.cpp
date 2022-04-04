#include <bits/stdc++.h>
using namespace std;

const int N = 12;
const char R = 'r';

int main(void) {
	int ans = 0;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (string::npos != s.find(R)) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
