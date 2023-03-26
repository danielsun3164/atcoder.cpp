#include <bits/stdc++.h>
using namespace std;

const int N = 3;

int main(void) {
	set<int> s;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		s.insert(a);
	}
	cout << ((N - 1 == s.size()) ? "Yes" : "No") << endl;
	return 0;
}
