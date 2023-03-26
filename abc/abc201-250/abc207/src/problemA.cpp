#include <bits/stdc++.h>
using namespace std;

const int N = 3;

int main(void) {
	vector<int> a(N);
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	cout << (accumulate(a.begin(), a.end(), 0) - *min_element(a.begin(), a.end())) << endl;
	return 0;
}
