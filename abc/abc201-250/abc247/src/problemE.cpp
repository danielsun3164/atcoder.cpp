#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, x, y;
	cin >> n >> x >> y;
	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}
	int posX = -1, posY = -1, b = -1;
	ll answer = 0LL;
	for (int i = 0; i < n; i++) {
		if (x == a[i]) {
			posX = i;
		}
		if (y == a[i]) {
			posY = i;
		}
		if ((a[i] < y) || (x < a[i])) {
			b = i;
		}
		answer += max(0, min(posX, posY) - b);
	}
	cout << answer << endl;
	return 0;
}
