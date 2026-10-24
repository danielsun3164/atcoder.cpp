#include <bits/stdc++.h>
using namespace std;

const int N = 400;
const int M = 3200;

int main(void) {
	int n;
	cin >> n;
	map<int, int> mp;
	int hi_count = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a >= M) {
			hi_count++;
		} else {
			mp[a / N]++;
		}
	}
	int sz = mp.size();
	int mn = (0 == sz) ? 1 : 0;
	cout << (sz + mn) << " " << (sz + hi_count) << endl;
	return 0;
}
