#include <bits/stdc++.h>
using namespace std;

int main(void) {
	string s;
	cin >> s;
	set<char> st;
	for (char &si : s) {
		st.insert(si);
	}
	cout << ((s.size() == st.size()) ? "yes" : "no") << endl;
	return 0;
}
