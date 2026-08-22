#include <bits/stdc++.h>
using namespace std;

const vector<int> COINS = {500, 100, 50, 10, 5, 1};

int main() {
	int a;
	cin >> a;
	a = 1000 - a;
	int ans = 0;
	for (int coin : COINS) {
		while (a >= coin) {
			a -= coin;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
