#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
using namespace std;

/** Fenwick tree (Binary indexed tree) を使った実装 */

struct xorint {
public:
	xorint() {
		_v = 0;
	}

	xorint(int v) {
		_v = v;
	}

	xorint& operator+=(int x) {
		_v ^= x;
		return *this;
	}

	xorint& operator+=(const xorint &x) {
		_v ^= x.value();
		return *this;
	}

	xorint& operator-=(int x) {
		_v ^= x;
		return *this;
	}

	xorint& operator-=(const xorint &x) {
		_v ^= x.value();
		return *this;
	}

	xorint operator+() const {
		return *this;
	}

	xorint operator-() const {
		return xorint() - *this;
	}

	friend xorint operator+(const xorint &lhs, const xorint &rhs) {
		return xorint(lhs) += rhs;
	}

	friend xorint operator-(const xorint &lhs, const xorint &rhs) {
		return xorint(lhs) -= rhs;
	}
	int value() const {
		return _v;
	}
private:
	int _v;
};

int main() {
	int n, q;
	cin >> n >> q;
	atcoder::fenwick_tree<xorint> fw(n);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		fw.add(i, xorint(a));
	}
	for (int i = 0; i < q; i++) {
		int t, x, y;
		cin >> t >> x >> y;
		x--;
		if (1 == t) {
			fw.add(x, y);
		} else {
			cout << fw.sum(x, y).value() << endl;
		}
	}
	return 0;
}
