#include <bits/stdc++.h>
using namespace std;

// 各操作を行う関数を実装する
const int NUM = 50;
bitset<50> add(bitset<50> S, int x);

// AとBに共通して含まれる要素からなる集合を返す
bitset<NUM> intersection(bitset<NUM> A, bitset<NUM> B) {
	bitset<NUM> result;
	for (int i = 0; i < NUM; i++) {
		if (A.test(i) && B.test(i)) {
			result = add(result, i);
		}
	}
	return result;
}
// AとBのうち少なくとも一方に含まれる要素からなる集合を返す
bitset<NUM> union_set(bitset<NUM> A, bitset<NUM> B) {
	bitset<NUM> result;
	for (int i = 0; i < NUM; i++) {
		if (A.test(i) || B.test(i)) {
			result = add(result, i);
		}
	}
	return result;
}
// AとBのうちどちらか一方にだけ含まれる要素からなる集合を返す
bitset<50> symmetric_diff(bitset<50> A, bitset<50> B) {
	bitset<NUM> result;
	for (int i = 0; i < NUM; i++) {
		if ((A.test(i) && !B.test(i)) || (B.test(i) && !A.test(i))) {
			result = add(result, i);
		}
	}
	return result;
}
// Aから値xを除く
bitset<50> subtract(bitset<50> A, int x) {
	A.set(x, 0);
	return A;
}
// Aに含まれる要素に1を加える(ただし、要素49が含まれる場合は0になるものとする)
bitset<50> increment(bitset<50> A) {
	bitset<NUM> result;
	for (int i = 0; i < NUM; i++) {
		if (A.test(i)) {
			result = add(result, (i + 1) % NUM);
		}
	}
	return result;
}
// Aに含まれる要素から1を引く(ただし、要素0が含まれる場合は49になるものとする)
bitset<50> decrement(bitset<50> A) {
	bitset<NUM> result;
	for (int i = 0; i < NUM; i++) {
		if (A.test(i)) {
			result = add(result, (i + NUM - 1) % NUM);
		}
	}
	return result;
}

// Sに値xを加える
bitset<50> add(bitset<50> S, int x) {
	S.set(x, 1);  // xビット目を1にする
	return S;
}

// 集合Sの内容を昇順で出力する(スペース区切りで各要素の値を出力する)
void print_set(bitset<50> S) {
	vector<int> cont;
	for (int i = 0; i < 50; i++) {
		if (S.test(i)) {
			cont.push_back(i);
		}
	}
	for (long unsigned int i = 0; i < cont.size(); i++) {
		if (i > 0)
			cout << " ";
		cout << cont.at(i);
	}
	cout << endl;
}

// これより下は書き換えない

int main() {
	bitset<NUM> A, B;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		A = add(A, x);
	}
	int M;
	cin >> M;
	for (int i = 0; i < M; i++) {
		int x;
		cin >> x;
		B = add(B, x);
	}

	// 操作
	string com;
	cin >> com;

	if (com == "intersection") {
		print_set(intersection(A, B));
	} else if (com == "union_set") {
		print_set(union_set(A, B));
	} else if (com == "symmetric_diff") {
		print_set(symmetric_diff(A, B));
	} else if (com == "subtract") {
		int x;
		cin >> x;
		print_set(subtract(A, x));
	} else if (com == "increment") {
		print_set(increment(A));
	} else if (com == "decrement") {
		print_set(decrement(A));
	}
}
