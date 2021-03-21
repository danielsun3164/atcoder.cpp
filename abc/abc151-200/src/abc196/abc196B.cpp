#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string x;
	cin >> x;
	cout << x.substr(0, x.find(".")) << endl;
	return 0;
}
