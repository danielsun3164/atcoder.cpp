#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<pair<int, string>> data(n);
	for (int i = 0; i < n; i++) {
		cin >> data[i].second >> data[i].first;
	}
	sort(data.begin(), data.end(), greater<pair<int, string>> { });
	cout << data[1].second << endl;
	return 0;
}
