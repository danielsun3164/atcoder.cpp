#include <bits/stdc++.h>
using namespace std;

const int N = 3;

int main(void) {
	vector<int> v(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	cout << v[1] << endl;
	return 0;
}
