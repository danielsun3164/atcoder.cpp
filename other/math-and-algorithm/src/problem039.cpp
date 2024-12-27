#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static string SMALL = "<";
const static string LARGE = ">";
const static string EQUAL = "=";

int main() {
	int n, q;
	cin >> n >> q;
	vector<ll> a(n + 1, 0LL);
	for (int i = 0; i < q; i++) {
		int l, r, x;
		cin >> l >> r >> x;
		a[l - 1] += x;
		a[r] -= x;
	}
	for (int i = 1; i < n; i++) {
		a[i] += a[i - 1];
		cout << ((a[i - 1] < a[i]) ? SMALL : ((a[i - 1] > a[i]) ? LARGE : EQUAL));
	}
	cout << endl;
	return 0;
}
