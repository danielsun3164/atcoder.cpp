#include <bits/stdc++.h>
using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	if (1 == min(h, w)) {
		cout << max(h, w) << endl;
	} else {
		cout << (((h + 1) >> 1) * ((w + 1) >> 1)) << endl;
	}
	return 0;
}
