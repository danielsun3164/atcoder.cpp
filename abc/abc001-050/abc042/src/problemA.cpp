#include <bits/stdc++.h>
using namespace std;

const static int N = 3;

int main(void) {
	map<int, int> mp;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		mp[a]++;
	}
	cout << (((2 == mp[5]) && (1 == mp[7]) ? "YES" : "NO")) << endl;
	return 0;
}
