#include <bits/stdc++.h>
using namespace std;

const int N = 200;
const int M = 8;

int calc(int n, vector<int> &a, int bit) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (bit & (1 << i)) {
			sum += a[i];
		}
	}
	return sum % N;
}

void print(int n, int bit) {
	int count = 0;
	string s = "";
	for (int i = 0; i < n; i++) {
		if (bit & (1 << i)) {
			count++;
			s.append(" ");
			s.append(to_string(i + 1));
		}
	}
	cout << count << s << endl;
}

int main(void) {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] %= N;
	}
	int m = min(n, M);
	vector<int> bits(N, -1);
	for (int bit = 1; bit < (1 << m); bit++) {
		int sum = calc(m, a, bit);
		if (bits[sum] > 0) {
			cout << "Yes" << endl;
			print(m, bits[sum]);
			print(m, bit);
			return 0;
		} else {
			bits[sum] = bit;
		}
	}
	cout << "No" << endl;
	return 0;
}
