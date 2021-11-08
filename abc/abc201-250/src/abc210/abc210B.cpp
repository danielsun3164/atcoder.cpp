#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	string s;
	cin >> s;
	cout << ((0 == (1 & s.find("1"))) ? "Takahashi" : "Aoki") << endl;
	return 0;
}
