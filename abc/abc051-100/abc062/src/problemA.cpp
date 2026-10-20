#include <bits/stdc++.h>
using namespace std;

map<int, int> MAP{{1, 1}, {2, 2}, {3, 1}, {4, 3},  {5, 1},	{6, 3},
				  {7, 1}, {8, 1}, {9, 3}, {10, 1}, {11, 3}, {12, 1}};

int main(void) {
	int x, y;
	cin >> x >> y;
	cout << ((MAP[x] == MAP[y]) ? "Yes" : "No") << endl;
	return 0;
}
