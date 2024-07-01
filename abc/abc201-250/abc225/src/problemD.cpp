#include <bits/stdc++.h>
using namespace std;

struct train {
	int prev = -1, next = -1;
};

vector<train> trains;

void print(int x) {
	while (-1 != trains[x].prev) {
		x = trains[x].prev;
	}
	vector<int> v;
	v.emplace_back(x + 1);
	while (-1 != trains[x].next) {
		x = trains[x].next;
		v.emplace_back(x + 1);
	}
	cout << v.size();
	for (int vi : v) {
		cout << " " << vi;
	}
	cout << endl;
}

int main(void) {
	int n, q;
	cin >> n >> q;
	trains.resize(n);
	while (q--) {
		int t, x;
		cin >> t >> x;
		x--;
		if (1 == t) {
			int y;
			cin >> y;
			y--;
			trains[x].next = y;
			trains[y].prev = x;
		} else if (2 == t) {
			int y;
			cin >> y;
			y--;
			trains[x].next = -1;
			trains[y].prev = -1;
		} else {
			print(x);
		}
	}
	return 0;
}
