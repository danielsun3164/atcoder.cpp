#include <bits/stdc++.h>
using namespace std;

const static vector<int> FIBONACCI{1,  2,  3,	5,	 8,	  13,  21,	34,
								   55, 89, 144, 233, 377, 610, 987, 1597};

void ask(vector<int> &a, int index) {
	cout << "? " << index << endl;
	cin >> a[index];
}

void get(vector<int> &a, int index) {
	if (-1 == a[index]) {
		ask(a, index);
	}
}

int calc_max(vector<int> &a, int cl, int cr, int dl, int dr, int fi, int answer) {
	if (cr - cl <= 3) {
		for (int i = cl; i <= cr; i++) {
			get(a, i);
			answer = max(answer, a[i]);
		}
		return answer;
	}
	if (-1 == dl) {
		dl = cl + FIBONACCI[fi];
		get(a, dl);
		answer = max(answer, a[dl]);
	}
	if (-1 == dr) {
		dr = cr - FIBONACCI[fi];
		get(a, dr);
		answer = max(answer, a[dr]);
	}
	if (a[dl] < a[dr]) {
		return calc_max(a, dl, cr, dr, -1, fi - 1, answer);
	} else {
		return calc_max(a, cl, dr, -1, dl, fi - 1, answer);
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int fi = 0;
		while (FIBONACCI[fi] <= n + 2) {
			fi++;
		}
		int fn = FIBONACCI[fi];
		vector<int> a(fn + 1, -1);
		a[0] = -2;
		for (int i = n + 1; i <= fn; i++) {
			a[i] = -i;
		}
		int answer = calc_max(a, 0, fn, -1, -1, fi - 2, 0);
		cout << "! " << answer << endl;
	}
	return 0;
}
