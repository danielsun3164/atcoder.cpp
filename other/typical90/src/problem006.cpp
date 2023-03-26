#include <bits/stdc++.h>
using namespace std;

const int N = 26;

int main() {
	int n, k;
	string s;
	cin >> n >> k >> s;
	vector<char> v(s.begin(), s.end());
	vector<vector<int>> idxes(N, vector<int>());
	for (int i = 0; i < n; i++) {
		idxes[s[i] - 'a'].emplace_back(i);
	}
	for (int i = 0; i < N; i++) {
		idxes[i].emplace_back(n);
	}
	string ans;
	int pre = 0;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < N; j++) {
			auto idx = lower_bound(idxes[j].begin(), idxes[j].end(), pre);
			if (*idx <= n - k + i) {
				ans.push_back(j + 'a');
				pre = (*idx) + 1;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
