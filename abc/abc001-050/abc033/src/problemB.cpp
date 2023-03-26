#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	string ans;
	int max = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		string s;
		int p;
		cin >> s >> p;
		sum += p;
		if (p > max) {
			max = p;
			ans = s;
		}
	}
	cout << ((max > sum / 2) ? ans : "atcoder") << endl;
	return 0;
}
