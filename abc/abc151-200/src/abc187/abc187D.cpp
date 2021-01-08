#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<pair<long long, long long>> d(n);
	long long aoki = 0L, takahashi = 0L;
	for (int i = 0; i < n; i++) {
		long long a, b;
		cin >> a >> b;
		d[i] = { a, b };
		aoki += a;
	}
	sort(d.begin(), d.end(), [](pair<long long, long long> a, pair<long long, long long> b) {
		return 2L * a.first + a.second > 2L * b.first + b.second;
	});
	for (int i = 0; i < n; i++) {
		takahashi += d[i].first + d[i].second;
		aoki -= d[i].first;
		if (takahashi > aoki) {
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
}
