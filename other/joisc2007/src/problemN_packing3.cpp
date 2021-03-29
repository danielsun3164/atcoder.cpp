#include <bits/stdc++.h>
using namespace std;

/**
 * http://hydra.nat.uni-magdeburg.de/packing/csq/csq17.html のデータを使用
 */
const vector<vector<int>> RESULT = { { 11719674, 11719674 }, { 35159023, 11719674 }, { 64840977, 11719674 }, { 88280326,
		11719674 }, { 50000000, 29862123 }, { 11719674, 35159023 }, { 88280326, 35159023 }, { 32678437, 45653466 }, {
		67321563, 45653466 }, { 11719674, 58598371 }, { 88280326, 58598371 }, { 50000000, 61444809 }, { 29862123,
		73439349 }, { 70137877, 73439349 }, { 50000000, 86749113 }, { 11719674, 88280326 }, { 88280326, 88280326 } };

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
