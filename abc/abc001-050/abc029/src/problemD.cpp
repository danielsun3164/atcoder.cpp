#include <bits/stdc++.h>
using namespace std;

int calc(string n) {
	int l = n.size();
	if (1 == l) {
		return ("0" == n) ? 0 : 1;
	}
	string pre = n.substr(0, 1), suf = n.substr(1);
	int ans = stoi(pre) * calc(string(l - 1, '9')) + calc(suf);
	if ("0" != pre) {
		ans += ("1" == pre) ? stoi(suf) + 1 : pow(10, l - 1);
	}
	return ans;
}

int main(void) {
	string n;
	cin >> n;
	cout << calc(n) << endl;
	return 0;
}
