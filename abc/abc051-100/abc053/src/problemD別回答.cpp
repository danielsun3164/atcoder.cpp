#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	set<int> st;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		st.insert(a);
	}
	int k = st.size();
	cout << (k - (1 & (k + 1))) << endl;
	return 0;
}
