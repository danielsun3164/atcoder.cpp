#include <iostream>
#include <vector>
#include <atcoder/twosat>
using namespace std;

int main() {
	int n, d;
	cin >> n >> d;

	// https://atcoder.github.io/ac-library/master/document_ja/twosat.html を参考
	vector<int> x(n), y(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}

	// ts[i] = (i-th flag is located on x[i])
	atcoder::two_sat ts(n);

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abs(x[i] - x[j]) < d) {
				ts.add_clause(i, false, j, false);
			}
			if (abs(x[i] - y[j]) < d) {
				ts.add_clause(i, false, j, true);
			}
			if (abs(y[i] - x[j]) < d) {
				ts.add_clause(i, true, j, false);
			}
			if (abs(y[i] - y[j]) < d) {
				ts.add_clause(i, true, j, true);
			}
		}
	}

	if (ts.satisfiable()) {
		cout << "Yes" << endl;
		auto answer = ts.answer();
		for (int i = 0; i < n; i++) {
			cout << (answer[i] ? x[i] : y[i]) << endl;
		}
	} else {
		cout << "No" << endl;
	}
	return 0;
}
