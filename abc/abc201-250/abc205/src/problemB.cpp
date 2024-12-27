#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s.insert(a);
	}
	cout << (((1 == *s.cbegin()) && (n == *s.crbegin()) && (n == int(s.size()))) ? "Yes" : "No")
		 << endl;
	return 0;
}
