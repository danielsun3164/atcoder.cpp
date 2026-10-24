#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &ai : a) {
		cin >> ai;
	}
	cout << (*max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end())) << endl;
	return 0;
}
