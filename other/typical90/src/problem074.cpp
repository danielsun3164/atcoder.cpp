#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int NPOS = -1;

int find_first_of(string s, int max_n) {
	for (int i = 0; i <= max_n; i++) {
		if (s[i] != 'a') {
			return i;
		}
	}
	return NPOS;
}

void convert(string &s, int pos) {
	for (int i = 0; i < pos; i++) {
		s[i]++;
		if ('d' == s[i]) {
			s[i] = 'a';
		}
	}
}

ll process(string &s, int pos, map<string, ll> &mp) {
	string key = s.substr(0, pos + 1);
	if (mp.end() != mp.find(key)) {
		fill(s.begin(), s.begin() + pos + 1, 'a');
		return mp[key];
	}
	ll result = 0LL;
	int npos = find_first_of(s, pos);
	while (npos != NPOS) {
		while (s[npos] > 'a') {
			result++;
			s[npos]--;
			if (npos > 0) {
				convert(s, npos);
				result += process(s, npos - 1, mp);
			}
		}
		npos = find_first_of(s, pos);
	}
	mp[key] = result;
	return result;
}

int main() {
	int n;
	string s;
	cin >> n >> s;
	map<string, ll> mp;
	cout << process(s, n - 1, mp) << endl;
	return 0;
}
