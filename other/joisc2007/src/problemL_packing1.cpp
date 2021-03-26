#include <bits/stdc++.h>
using namespace std;

/**
 * http://hydra.nat.uni-magdeburg.de/packing/csq/csq6.html のデータを使用
 */
const vector<vector<int>> RESULT = { { 18768060, 18768060 }, { 81231940, 18768060 }, { 50000000, 39589353 }, { 18768060,
		60410647 }, { 81231940, 60410647 }, { 50000000, 81231940 } };

int main() {
	for (vector<int> line : RESULT) {
		for (long unsigned int i = 0; i < line.size(); i++) {
			if (i) {
				cout << " ";
			}
			cout << line[i];
		}
		cout << endl;
	}
	return 0;
}
