#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	set<string> st;
	for (int i = 0; i < n; i++) {
		string s, t;
		cin >> s >> t;
		st.insert(s + " " + t);
	}
	cout << ((int(st.size()) == n) ? "No" : "Yes") << endl;
	return 0;
}
