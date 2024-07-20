#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static ll INF = LONG_LONG_MAX >> 1;
const static ll KEI = 1LL << 10;
const static ll MAN = 10'000;
const static char BLACK = 'B';
const static char WHITE = 'W';
const static char BLANK = '.';

map<string, ll> mp;

ll calc(string s) {
	if (mp.contains(s)) {
		return mp[s];
	}
	ll l_max = -INF, r_min = INF;
	int n = s.size();
	{
		for (int i = 0; i < n; i++) {
			if (BLACK == s[i]) {
				s[i] = BLANK;
				l_max = max(l_max, calc(s));
				s[i] = BLACK;
			}
		}
		for (int i = 1; i < n; i++) {
			if ((BLANK == s[i - 1]) && (WHITE == s[i])) {
				swap(s[i - 1], s[i]);
				l_max = max(l_max, calc(s));
				swap(s[i - 1], s[i]);
			}
		}
	}
	{
		for (int i = 0; i < n; i++) {
			if (WHITE == s[i]) {
				s[i] = BLANK;
				r_min = min(r_min, calc(s));
				s[i] = WHITE;
			}
		}
		for (int i = 1; i < n; i++) {
			if ((BLANK == s[i - 1]) && (BLACK == s[i])) {
				swap(s[i - 1], s[i]);
				r_min = min(r_min, calc(s));
				swap(s[i - 1], s[i]);
			}
		}
	}
	if ((-INF == l_max) && (INF == r_min)) {
		return mp[s] = 0LL;
	}
	if ((-INF == l_max) || (INF == r_min)) {
		for (ll z = 0LL; z <= MAN; z++) {
			ll ret = z * KEI;
			if ((l_max < ret) && (ret < r_min)) {
				return mp[s] = ret;
			}
			ret *= -1;
			if ((l_max < ret) && (ret < r_min)) {
				return mp[s] = ret;
			}
		}
	}
	ll p = KEI;
	while (p > 0) {
		for (ll z = 0LL; z <= MAN; z++) {
			ll ret = z * p;
			if ((ret > abs(l_max)) && (ret > abs(r_min))) {
				break;
			}
			if ((l_max < ret) && (ret < r_min)) {
				return mp[s] = ret;
			}
			ret *= -1;
			if ((l_max < ret) && (ret < r_min)) {
				return mp[s] = ret;
			}
		}
		p >>= 1;
	}
	return mp[s] = 0LL;
}

int main(void) {
	int n;
	cin >> n;
	vector<string> s(n);
	for (int i = 0; i < n; i++) {
		string t;
		cin >> t;
		for (int j = 0; j < n; j++) {
			s[j].push_back(t[j]);
		}
	}
	ll answer = 0LL;
	for (string si : s) {
		answer += calc(si);
	}
	cout << ((answer > 0LL) ? "Takahashi" : "Snuke") << endl;
	return 0;
}
