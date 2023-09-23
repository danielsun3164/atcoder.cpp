#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	set<int> st;
	map<int, int> mp;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		st.insert(a[i]);
	}
	int count = 0;
	for (int sti : st) {
		mp[sti] = count++;
	}
	for (int i = 0; i < n; i++) {
		cout << mp[a[i]] << endl;
	}
	return 0;
}
