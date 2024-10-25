#include <bits/stdc++.h>
using namespace std;

void merge_sort(vector<int> &a, vector<int> &c, int start, int end) {
	if (1 == end - start) {
		return;
	}
	int med = (start + end) >> 1;
	merge_sort(a, c, start, med);
	merge_sort(a, c, med, end);
	copy(a.begin() + start, a.begin() + end, c.begin() + start);
	int left = start, right = med;
	for (int i = start; i < end; i++) {
		if ((right == end) || ((left < med) && (c[left] < c[right]))) {
			a[i] = c[left++];
		} else {
			a[i] = c[right++];
		}
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n), c(n, 0);
	for (int &ai : a) {
		cin >> ai;
	}
	merge_sort(a, c, 0, n);
	for (int i = 0; i < n; i++) {
		cout << (i ? " " : "") << a[i];
	}
	cout << endl;
	return 0;
}
