#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int MAX = 1'000'000;
const static int TEN = 10;

int convert(int n) {
	int last = n % TEN, power = 1, m = n;
	while (m >= TEN) {
		power *= TEN;
		m /= TEN;
	}
	return last * power + n / TEN;
}

int main(void) {
	int a, n;
	cin >> a >> n;
	vector<int> result(MAX + 1, -1);
	result[1] = 0;
	queue<int> que;
	que.push(1);
	while (!que.empty()) {
		int now = que.front();
		que.pop();
		ll next = now * ll(a);
		if ((next <= MAX) && (-1 == result[next])) {
			result[next] = result[now] + 1;
			que.push(next);
		}
		if ((now >= TEN) && (0 != now % TEN)) {
			int next2 = convert(now);
			if (-1 == result[next2]) {
				result[next2] = result[now] + 1;
				que.push(next2);
			}
		}
	}
	cout << result[n] << endl;
	return 0;
}
