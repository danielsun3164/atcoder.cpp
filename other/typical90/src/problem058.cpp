#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const static int N = 100'000;
const static int TEN = 10;

int process(int n) {
	int result = n;
	while (n > 0) {
		result += n % TEN;
		n /= TEN;
	}
	if (result >= N) {
		result -= N;
	}
	return result;
}

int main() {
	int n;
	ll k;
	cin >> n >> k;
	set<int> s;
	vector<int> v;
	while (s.end() == s.find(n)) {
		s.insert(n);
		v.emplace_back(n);
		n = process(n);
	}
	int prev = distance(v.begin(), find(v.begin(), v.end(), n)), loop = v.size() - prev;
	cout << v[(k - prev) % loop + prev] << endl;
	return 0;
}
