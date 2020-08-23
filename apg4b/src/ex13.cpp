#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N);

	int sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
		sum += a[i];
	}
	int avg = sum / N;
	for (int i = 0; i < N; i++) {
		cout << abs(avg - a[i]) << endl;
	}
}
