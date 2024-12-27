#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
#include <atcoder/dsu>
using namespace std;

void check(int n, int m, vector<int> d, vector<int> a, vector<int> b) {
	string input = to_string(n) + " " + to_string(m) + "\n";
	for (int i = 0; i < n; i++) {
		input += (i ? " " : "") + to_string(d[i]);
	}
	input += "\n";
	atcoder::dsu du(n);
	for (int i = 0; i < m; i++) {
		input += to_string(a[i]) + " " + to_string(b[i]) + "\n";
		du.merge(a[i] - 1, b[i] - 1);
	}
	Command cmd = execute(input);
	int count = 0;
	for (int i = 0; i < int(cmd.StdOut.size()); i++) {
		if ('\n' == cmd.StdOut[i]) {
			count++;
		}
	}
	EXPECT_EQ(n - m - 1, count);
	istringstream output_ss(cmd.StdOut);
	for (int i = 0; i < n - m - 1; i++) {
		int u, v;
		output_ss >> u >> v;
		u--, v--;
		EXPECT_FALSE(du.same(u, v));
		du.merge(u, v);
	}
	EXPECT_EQ(n, du.size(0));
}

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	int result;
	expected_ss >> result;
	if (-1 == result) {
		check(input, "-1");
	} else {
		istringstream input_ss(input);
		int n, m;
		input_ss >> n >> m;
		vector<int> d(n), a(m), b(m);
		for (int &di : d) {
			input_ss >> di;
		}
		for (int i = 0; i < m; i++) {
			input_ss >> a[i] >> b[i];
		}
		check(n, m, d, a, b);
	}
}

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc239/F";
	FUNC = &my_check;
}

TEST(abc239_problemF, case1) {
	check(6, 2, vector<int>{1, 2, 1, 2, 2, 2}, vector<int>{2, 1}, vector<int>{3, 4});
}

TEST(abc239_problemF, case2) {
	check(string("") + "5 1\n" + "1 1 1 1 4\n" + "2 3", string("") + "-1");
}

TEST(abc239_problemF, case3) {
	check(string("") + "4 0\n" + "3 3 3 3", string("") + "-1");
}
