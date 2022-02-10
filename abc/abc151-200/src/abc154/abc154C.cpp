#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s.insert(a);
	}
	cout << ((n == int(s.size())) ? "YES" : "NO") << endl;
	return 0;
}
