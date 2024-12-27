#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll h, w;
	cin >> h >> w;
	cout << ((1 == min(h, w)) ? 1 : (h * w + 1) >> 1) << endl;
	return 0;
}
