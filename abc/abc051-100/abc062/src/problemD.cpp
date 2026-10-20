#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = LONG_LONG_MAX;

int main(void) {
	int n;
	cin >> n;
	vector<ll> a(3 * n);
	for (ll &ai : a) {
		cin >> ai;
	}
	vector<ll> red(n + 1), green(n + 1);
	{
		priority_queue<ll, vector<ll>, greater<ll>> que;
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			sum += a[i];
			que.push(a[i]);
		}
		red[0] = sum;
		for (int i = 0; i < n; i++) {
			que.push(a[n + i]);
			sum += a[n + i];
			sum -= que.top();
			que.pop();
			red[i + 1] = sum;
		}
	}
	{
		priority_queue<ll> que;
		ll sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += a[3 * n - i];
			que.push(a[3 * n - i]);
		}
		green[n] = sum;
		for (int i = 1; i <= n; i++) {
			que.push(a[2 * n - i]);
			sum += a[2 * n - i];
			sum -= que.top();
			que.pop();
			green[n - i] = sum;
		}
	}
	ll answer = -INF;
	for (int i = 0; i <= n; i++) {
		answer = max(answer, red[i] - green[i]);
	}
	cout << answer << endl;
	return 0;
}
