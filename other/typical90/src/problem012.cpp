#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;

const vector<int> XS = { 0, 0, 1, -1 };
const vector<int> YS = { 1, -1, 0, 0 };

int main() {
	int h, w;
	cin >> h >> w;
	int n = h * w;
	vector<bool> red(n, false);
	atcoder::dsu d(n);
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int t;
		cin >> t;
		if (1 == t) {
			int r, c;
			cin >> r >> c;
			int ni = (r - 1) * w + (c - 1);
			red[ni] = true;
			for (int j = 0; j < int(XS.size()); j++) {
				int nr = r + XS[j] - 1, nc = c + YS[j] - 1;
				int nni = nr * w + nc;
				if ((nr >= 0) && (nr < h) && (nc >= 0) && (nc < w) && red[nni]) {
					d.merge(ni, nni);
				}
			}
		} else {
			int ra, ca, rb, cb;
			cin >> ra >> ca >> rb >> cb;
			int nia = (ra - 1) * w + (ca - 1), nib = (rb - 1) * w + (cb - 1);
			cout << ((red[nia] && red[nib] && d.same(nia, nib)) ? "Yes" : "No") << endl;
		}
	}
	return 0;
}
