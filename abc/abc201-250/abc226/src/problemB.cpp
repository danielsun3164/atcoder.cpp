#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	set<vector<int>> st;
	while (n--) {
		int l;
		cin >> l;
		vector<int> a(l);
		for (int &ai : a) {
			cin >> ai;
		}
		st.insert(a);
	}
	cout << st.size() << endl;
	return 0;
}
