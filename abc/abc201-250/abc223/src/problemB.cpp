#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	int n = s.size();
	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		v[i] = s.substr(i) + s.substr(0, i);
	}
	cout << *min_element(v.begin(), v.end()) << endl;
	cout << *max_element(v.begin(), v.end()) << endl;
	return 0;
}
