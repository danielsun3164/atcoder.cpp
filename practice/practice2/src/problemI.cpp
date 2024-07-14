#include <bits/stdc++.h>
#include <atcoder/string>
using namespace std;
using ll = long long;

int main() {
	string s;
	cin >> s;

	// https://atcoder.github.io/ac-library/master/document_ja/string.html を参考
	vector<int> sa = atcoder::suffix_array(s);
	ll answer = s.size() * (ll)(s.size() + 1) / 2;
	for (auto x : atcoder::lcp_array(s, sa)) {
		answer -= x;
	}
	cout << answer << endl;
	return 0;
}
