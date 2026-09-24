#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	multiset<int> st;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		st.insert(a);
	}
	vector<int> b(m);
	for (int &bi : b) {
		cin >> bi;
	}
	for (int bi : b) {
		auto it = st.find(bi);
		if (it != st.end()) {
			st.erase(it);
		} else {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
