#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 10;

int main(void) {
	int k;
	cin >> k;
	queue<ll> que;
	for (int i = 1; i < N; i++) {
		que.push(i);
	}
	while (--k) {
		ll now = que.front();
		que.pop();
		int d = now % N;
		for (int i = max(0, d - 1); i <= min(9, d + 1); i++) {
			que.push(now * N + i);
		}
	}
	cout << que.front() << endl;
	return 0;
}
