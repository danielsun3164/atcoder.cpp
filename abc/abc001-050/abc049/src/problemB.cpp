#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int h, w;
	cin >> h >> w;
	vector<string> c(h);
	for (string &ci : c) {
		cin >> ci;
	}
	for (string ci : c) {
		cout << ci << endl << ci << endl;
	}
	return 0;
}
