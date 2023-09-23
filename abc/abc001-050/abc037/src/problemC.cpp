#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, k;
	cin >> n >> k;
	vector<ll> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	queue<ll> que;
	ll sum = 0LL;
	for (int i = 0; i < k; i++) {
		sum += a[i];
		que.push(a[i]);
	}
	ll answer = sum;
	for (int i = k; i < n; i++) {
		ll tmp = que.front();
		que.pop();
		que.push(a[i]);
		sum += a[i] - tmp;
		answer += sum;
	}
	cout << answer << endl;
	return 0;
}
