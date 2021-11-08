#include <bits/stdc++.h>
using namespace std;

/**
 * http://hydra.nat.uni-magdeburg.de/packing/csq/csq11.html のデータを使用
 */
const vector<vector<int>> RESULT = { { 14239924, 14239924 }, { 42719771, 14239924 }, { 84329673, 15670327 }, { 58250656,
		38112363 }, { 14239924, 42719771 }, { 85760076, 45483490 }, { 38112363, 58250656 }, { 65621783, 65621783 }, {
		15670327, 84329673 }, { 45483490, 85760076 }, { 85760076, 85760076 } };

int main() {
	for (vector<int> line : RESULT) {
		for (int i = 0; i < int(line.size()); i++) {
			if (i) {
				cout << " ";
			}
			cout << line[i];
		}
		cout << endl;
	}
	return 0;
}
