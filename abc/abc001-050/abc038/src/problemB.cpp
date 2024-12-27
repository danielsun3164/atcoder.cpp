#include <bits/stdc++.h>
using namespace std;

const static int N = 2;

int main(void) {
	set<int> s1, s2, res;
	int a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		s1.insert(a);
	}
	for (int i = 0; i < N; i++) {
		cin >> a;
		s2.insert(a);
	}
	set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(res, res.begin()));
	cout << (res.empty() ? "NO" : "YES") << endl;
	return 0;
}
