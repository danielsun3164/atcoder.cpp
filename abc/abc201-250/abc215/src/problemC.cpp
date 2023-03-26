#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int calc_count(map<char, int> &m) {
	int res = 1, sum = 0, prod = 1;
	for (pair<char, int> p : m) {
		sum += p.second;
		for (int i = 2; i <= p.second; i++) {
			prod *= i;
		}
	}
	for (int i = 2; i <= sum; i++) {
		res *= i;
	}
	return res / prod;
}

string calc_string(map<char, int> &m, int k) {
	for (pair<char, int> p : m) {
		if (1 == m[p.first]) {
			m.erase(p.first);
		} else {
			m[p.first]--;
		}
		int cnt = calc_count(m);
		if (k <= cnt) {
			return p.first + calc_string(m, k);
		} else {
			k -= cnt;
			m[p.first]++;
		}
	}
	return "";
}

int main(void) {
	string s;
	int k;
	cin >> s >> k;
	map<char, int> m;
	for (int i = 0; i < int(s.size()); i++) {
		m[s[i]]++;
	}
	cout << calc_string(m, k) << endl;
	return 0;
}
