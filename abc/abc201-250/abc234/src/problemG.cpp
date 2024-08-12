#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using mint = atcoder::modint998244353;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}
	vector<mint> dp(n + 1, 0);
	dp[0] = 1;
	stack<int> max_s, min_s;
	stack<mint> max_v, min_v;
	mint max_sum = 0, min_sum = 0;
	for (int i = 0; i < n; i++) {
		{
			mint sum_v = dp[i];
			while (!max_s.empty() && (max_s.top() < a[i])) {
				max_sum -= max_v.top() * max_s.top();
				sum_v += max_v.top();
				max_s.pop();
				max_v.pop();
			}
			max_sum += sum_v * a[i];
			max_s.push(a[i]);
			max_v.push(sum_v);
		}
		{
			mint sum_v = dp[i];
			while (!min_s.empty() && (min_s.top() > a[i])) {
				min_sum -= min_v.top() * min_s.top();
				sum_v += min_v.top();
				min_s.pop();
				min_v.pop();
			}
			min_sum += sum_v * a[i];
			min_s.push(a[i]);
			min_v.push(sum_v);
		}
		dp[i + 1] = max_sum - min_sum;
	}
	cout << dp[n].val() << endl;
	return 0;
}
