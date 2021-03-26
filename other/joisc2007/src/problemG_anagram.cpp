#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 26;

ll count(vector<int> &counts, vector<ll> &frac) {
	int sum = 0;
	for (unsigned long int i = 0; i < counts.size(); i++) {
		sum += counts[i];
	}
	ll ans = frac[sum];
	for (int c : counts) {
		ans /= frac[c];
	}
	return ans;
}

ll solve(string s, vector<int> &counts, vector<ll> &frac) {
	ll ans = 0LL;
	if (s.size() > 1) {
		for (int i = 0; i < s[0] - 'A'; i++) {
			if (counts[i] > 0) {
				counts[i]--;
				ans += count(counts, frac);
				counts[i]++;
			}
		}
		counts[s[0] - 'A']--;
		ans += solve(s.substr(1), counts, frac);
	}
	return ans;
}

int main() {
	string s;
	cin >> s;
	int n = s.size();
	vector<ll> frac(n + 1);
	frac[0] = 1LL;
	for (int i = 1; i <= n; i++) {
		frac[i] = frac[i - 1] * i;
	}
	vector<int> counts(N, 0);
	for (char c : s) {
		counts[c - 'A']++;
	}
	cout << solve(s, counts, frac) + 1 << endl;
	return 0;
}
