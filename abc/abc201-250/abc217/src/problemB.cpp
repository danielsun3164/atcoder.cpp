#include <bits/stdc++.h>
using namespace std;

const static int N = 3;

int main(void) {
	set<string> st{"ABC", "ARC", "AGC", "AHC"};
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		st.erase(s);
	}
	cout << *st.begin() << endl;
	return 0;
}
