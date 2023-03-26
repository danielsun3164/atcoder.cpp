#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	set<char> st;
	for (char c : s) {
		st.insert(c);
	}
	cout << ((1 == st.size()) ? "SAME" : "DIFFERENT") << endl;
	return 0;
}
