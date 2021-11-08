#include <bits/stdc++.h>
using namespace std;

const int N = 4;

int main(void) {
	set<string> st;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		st.insert(s);
	}
	cout << ((N == st.size()) ? "Yes" : "No") << endl;
	return 0;
}
