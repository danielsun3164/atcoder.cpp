#include <bits/stdc++.h>
using namespace std;

const int N = 3;

int main(void) {
	set<int> s;
	for (int i = 0; i < N; i++) {
		int l;
		cin >> l;
		auto itr = s.find(l);
		if (s.end() != s.find(l)) {
			s.erase(itr);
		} else {
			s.insert(l);
		}
	}
	cout << (*s.begin()) << endl;
	return 0;
}
