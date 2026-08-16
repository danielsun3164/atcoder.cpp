#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> values, counts;
	values.emplace_back(0);
	counts.emplace_back(0);
	int result = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		result++;
		if (a == values.back()) {
			counts.back() += 1;
			if (a == counts.back()) {
				values.pop_back();
				counts.pop_back();
				result -= a;
			}
		} else {
			values.emplace_back(a);
			counts.emplace_back(1);
		}
		cout << result << endl;
	}
	return 0;
}
