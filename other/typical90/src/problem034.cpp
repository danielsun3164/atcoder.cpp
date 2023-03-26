#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	map<int, int> m;
	int left = 0, answer = 0;
	for (int right = 0; right < n; right++) {
		m[a[right]]++;
		while (int(m.size()) > k) {
			if (1 == m[a[left]]) {
				m.erase(a[left]);
			} else {
				m[a[left]]--;
			}
			left++;
		}
		answer = max(answer, right - left + 1);
	}
	cout << answer << endl;
	return 0;
}
