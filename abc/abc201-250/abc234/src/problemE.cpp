#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int TEN = 10;

set<ll> arithmeticNumbers(int length) {
	int d = TEN / (length - 1);
	set<ll> st;
	for (int i = 0; i <= d; i++) {
		for (int j = 0; j < TEN; j++) {
			if (j + (length - 1) * i >= TEN) {
				break;
			}
			string s;
			for (int k = 0; k < length; k++) {
				s.push_back('0' + k * i + j);
			}
			st.insert(stoll(s));
			reverse(s.begin(), s.end());
			st.insert(stoll(s));
		}
	}
	return st;
}

int main(void) {
	string x;
	cin >> x;
	int n = x.size();
	if (n <= 2) {
		cout << x << endl;
		return 0;
	}
	set<ll> st = arithmeticNumbers(n);
	cout << *st.lower_bound(stoll(x)) << endl;
	return 0;
}
