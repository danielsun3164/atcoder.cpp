#include <bits/stdc++.h>
using namespace std;

const int N = 3;
const vector<string> PERSON{"F", "M", "T"};

int main(void) {
	int v, sum = 0;
	cin >> v;
	vector<int> a(N);
	for (int &ai : a) {
		cin >> ai;
		sum += ai;
	}
	v %= sum;
	for (int i = 0; i < 3; i++) {
		if (v < a[i]) {
			cout << PERSON[i] << endl;
			return 0;
		}
		v -= a[i];
	}
	return 0;
}
