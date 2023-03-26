#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int n, int k, vector<int> &a, int value) {
	int now = 0, count = 0;
	for (int i = 0; i < n + 1; i++) {
		if (a[i] - now >= value) {
			now = a[i];
			count++;
		}
	}
	return count > k;
}

int main() {
	int n, l, k;
	cin >> n >> l >> k;
	vector<int> a(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	a[n] = l;
	int ok = 0, ng = l + 1;
	while (ng > ok + 1) {
		int med = (ok + ng) >> 1;
		if (check(n, k, a, med)) {
			ok = med;
		} else {
			ng = med;
		}
	}
	cout << ok << endl;
	return 0;
}
