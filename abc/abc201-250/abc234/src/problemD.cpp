#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, k;
	cin >> n >> k;
	set<int> st;
	for (int i = 0; i < k; i++) {
		int p;
		cin >> p;
		st.insert(p);
	}
	cout << *st.begin() << endl;
	for (int i = k; i < n; i++) {
		int p;
		cin >> p;
		st.insert(p);
		st.erase(st.begin());
		cout << *st.begin() << endl;
	}
	return 0;
}
