#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 5;

void pack(vector<ll> &a, vector<ll> &b, int x, int y) {
	ll c = min(a[x], b[y]);
	a[x] -= c;
	b[y] -= c;
	b[y - x] += c;
}

int main(void) {
	int t;
	cin >> t;
	while (t--) {
		vector<ll> a(N + 1), b(N + 1);
		a[0] = b[0] = 0LL;
		for (int i = 1; i <= N; i++) {
			cin >> a[i];
		}
		for (int i = 1; i <= N; i++) {
			cin >> b[i];
		}
		for (int i = N; i >= 3; i--) {
			pack(a, b, i, i);
			for (int j = N; j > i; j--) {
				pack(a, b, i, j);
			}
		}
		for (int i = 2; i >= 1; i--) {
			for (int j = N; j >= i; j--) {
				pack(a, b, i, j);
			}
		}
		bool answer = true;
		for (int i = 1; i <= N; i++) {
			if (a[i] > 0LL) {
				answer = false;
				break;
			}
		}
		cout << (answer ? "Yes" : "No") << endl;
	}
	return 0;
}
