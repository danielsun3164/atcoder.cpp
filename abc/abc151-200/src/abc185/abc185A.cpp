#include <bits/stdc++.h>
using namespace std;

const int N = 4;

int main(void) {
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	cout << *min_element(v.begin(), v.end()) << endl;
	return 0;
}
