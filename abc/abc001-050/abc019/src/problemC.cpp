#include <bits/stdc++.h>
using namespace std;

int calc(int a) {
	while (!(1 & a)) {
		a >>= 1;
	}
	return a;
}

int main(void) {
	int n;
	cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s.insert(calc(a));
	}
	cout << s.size() << endl;
	return 0;
}
