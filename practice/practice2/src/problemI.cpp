#include <iostream>
#include <string>
#include <vector>
#include <atcoder/string>

using namespace std;

int main() {
	string s;
	cin >> s;

	// https://atcoder.github.io/ac-library/master/document_ja/string.html を参考
	vector<int> sa = atcoder::suffix_array(s);
	long long answer = s.size() * (long long) (s.size() + 1) / 2;
	for (auto x : atcoder::lcp_array(s, sa)) {
		answer -= x;
	}
	cout << answer << endl;

	return 0;
}
