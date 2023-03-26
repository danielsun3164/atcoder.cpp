#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	set<string> s;
	for (int i = 1; i <= n; i++) {
		string si;
		cin >> si;
		if (s.end() == s.find(si)) {
			s.insert(si);
			cout << i << endl;
		}
	}
	return 0;
}
