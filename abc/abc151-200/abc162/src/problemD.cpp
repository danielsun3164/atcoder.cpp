#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int getColor(char c) {
	return ('R' == c) ? 0 : (('G' == c) ? 1 : 2);
}

int main(void) {
	int n;
	string s;
	cin >> n >> s;
	vector<set<int>> sets(3);
	for (int i = 0; i < n; i++) {
		sets[getColor(s[i])].insert(i + 1);
	}
	ll ans = sets[0].size() * (ll)sets[1].size() * sets[2].size();
	for (int ri : sets[0]) {
		for (int gi : sets[1]) {
			ans -= (sets[2].end() != sets[2].find(ri + ri - gi)) ? 1 : 0;
			ans -= (sets[2].end() != sets[2].find(gi + gi - ri)) ? 1 : 0;
			ans -= (!(1 & (ri ^ gi)) && (sets[2].end() != sets[2].find((ri + gi) / 2))) ? 1 : 0;
		}
	}
	cout << ans << endl;
	return 0;
}
