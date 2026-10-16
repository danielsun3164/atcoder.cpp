#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	set<int> st;
	for (int i = 1; i <= (2 * n + 1); i++) {
		st.insert(i);
	}
	while (!st.empty()) {
		cout << *st.begin() << endl;
		st.erase(st.begin());
		int t;
		cin >> t;
		if (!st.empty()) {
			st.erase(st.find(t));
		}
	}
	return 0;
}
