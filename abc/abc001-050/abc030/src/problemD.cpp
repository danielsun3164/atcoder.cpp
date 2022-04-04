#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
namespace bmp = boost::multiprecision;
using ll = long long;

int main(void) {
	int n, a;
	bmp::cpp_int k;
	cin >> n >> a >> k;
	a--;
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
		b[i]--;
	}
	vector<int> v;
	vector<bool> used(n, false);
	while (!used[a]) {
		v.emplace_back(a);
		used[a] = true;
		a = b[a];
	}
	int t = distance(v.begin(), find(v.begin(), v.end(), a));
	int c = v.size() - t;
	int idx = int((k >= t) ? (k - t) % c + t : k);
	cout << (v[idx] + 1) << endl;
	return 0;
}
