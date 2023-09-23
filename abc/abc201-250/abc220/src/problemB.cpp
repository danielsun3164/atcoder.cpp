#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int k;
	string a, b;
	cin >> k >> a >> b;
	cout << (stoll(a, nullptr, k) * stoll(b, nullptr, k)) << endl;
	return 0;
}
