#include <bits/stdc++.h>
using namespace std;

const static int N = 3;

int main(void) {
	set<int> st;
	for (int i = 0; i < N; i++) {
		int s;
		cin >> s;
		st.insert(s);
	}
	cout << st.size() << endl;
	return 0;
}
