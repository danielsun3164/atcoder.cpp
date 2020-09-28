#include <bits/stdc++.h>
using namespace std;

int saikoro[] = { 1, 3, 2, 4, 5, 6 };

void swap(int i, int j) {
	int temp = saikoro[i];
	saikoro[i] = saikoro[j];
	saikoro[j] = temp;
}

void process(string c) {
	if ("East" == c) {
		swap(0, 1);
		swap(5, 3);
		swap(0, 5);
	} else if ("South" == c) {
		swap(0, 2);
		swap(5, 4);
		swap(0, 5);
	} else if ("West" == c) {
		swap(0, 3);
		swap(5, 1);
		swap(0, 5);
	} else if ("North" == c) {
		swap(0, 4);
		swap(5, 2);
		swap(0, 5);
	} else if ("Left" == c) {
		swap(2, 1);
		swap(4, 3);
		swap(2, 4);
	} else if ("Right" == c) {
		swap(1, 2);
		swap(3, 4);
		swap(1, 3);
	}
}

int main() {
	int n;
	cin >> n;
	string c;
	int sum = saikoro[0];
	for (int i = 0; i < n; i++) {
		cin >> c;
		process(c);
		sum += saikoro[0];
	}
	cout << sum << endl;
	return 0;
}
