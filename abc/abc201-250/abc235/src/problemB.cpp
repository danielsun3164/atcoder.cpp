#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> h(n);
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	int now = h[0];
	for (int i = 1; i < n; i++) {
		if (now < h[i]) {
			now = h[i];
		} else {
			break;
		}
	}
	cout << now << endl;
	return 0;
}
