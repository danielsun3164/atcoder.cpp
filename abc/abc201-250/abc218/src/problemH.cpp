#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void) {
	int n, r;
	cin >> n >> r;
	r = min(r, n - r);
	vector<ll> a(n - 1), b(n, 0);
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i];
		b[i] += a[i];
		b[i + 1] += a[i];
	}
	set<pair<ll, int>> data_set;
	set<int> idx_set;
	for (int i = 0; i < n; i++) {
		data_set.insert({b[i], i});
		idx_set.insert(i);
	}
	ll answer = 0LL;
	while (r--) {
		auto now_it = prev(data_set.end());
		answer += now_it->first;
		data_set.erase(now_it);
		auto idx_it = idx_set.find(now_it->second);
		auto idx_next_it = next(idx_it);
		if (idx_set.begin() == idx_it) {
			data_set.erase({b[*idx_next_it], *idx_next_it});
			idx_set.erase(idx_it);
			idx_set.erase(idx_next_it);
		} else if (idx_set.end() == idx_next_it) {
			auto idx_prev_it = prev(idx_it);
			data_set.erase({b[*idx_prev_it], *idx_prev_it});
			idx_set.erase(idx_prev_it);
			idx_set.erase(idx_it);
		} else {
			auto idx_prev_it = prev(idx_it);
			b[now_it->second] = b[*idx_prev_it] - now_it->first + b[*idx_next_it];
			data_set.insert({b[now_it->second], now_it->second});
			data_set.erase({b[*idx_prev_it], *idx_prev_it});
			data_set.erase({b[*idx_next_it], *idx_next_it});
			idx_set.erase(idx_prev_it);
			idx_set.erase(idx_next_it);
		}
	}
	cout << answer << endl;
	return 0;
}
