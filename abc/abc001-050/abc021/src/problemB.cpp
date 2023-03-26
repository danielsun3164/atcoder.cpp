#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, a, b, k;
	cin >> n >> a >> b >> k;
	set<int> s;
	s.insert(a);
	s.insert(b);
	for (int i = 0; i < k; i++) {
		int p;
		cin >> p;
		s.insert(p);
	}
	cout << ((k + 2 == int(s.size())) ? "YES" : "NO") << endl;
	return 0;
}
