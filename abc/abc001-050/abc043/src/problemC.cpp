#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, sum = 0;
	cin >> n;
	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
		sum += ai;
	}
	int d = sum / n, answer = INT32_MAX >> 1;
	for (int i = d - 1; i <= d + 1; i++) {
		int s = 0;
		for (int ai : a) {
			s += (ai - i) * (ai - i);
		}
		answer = min(answer, s);
	}
	cout << answer << endl;
	return 0;
}
