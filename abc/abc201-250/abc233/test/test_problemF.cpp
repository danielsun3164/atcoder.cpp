#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

void check(int n, vector<int> p, int m, vector<int> a, vector<int> b) {
	string input = to_string(n) + "\n";
	for (int i = 0; i < n; i++) {
		input += ((i) ? " " : "") + to_string(p[i]);
	}
	input += "\n" + to_string(m) + "\n";
	for (int i = 0; i < m; i++) {
		input += to_string(a[i]) + " " + to_string(b[i]) + "\n";
	}
	Command cmd = execute(input);
	istringstream output_ss(cmd.StdOut);
	int k;
	output_ss >> k;
	EXPECT_TRUE(k >= 0);
	vector<int> expected(n);
	iota(expected.begin(), expected.end(), 1);
	for (int i = 0; i < k; i++) {
		int c;
		output_ss >> c;
		EXPECT_TRUE((1 <= c) && (c <= m));
		c--;
		swap(p[a[c] - 1], p[b[c] - 1]);
	}
	EXPECT_EQ(expected, p);
}

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	int result;
	expected_ss >> result;
	if (-1 == result) {
		check_from_file(input, expected);
	} else {
		istringstream input_ss(input);
		int n;
		input_ss >> n;
		vector<int> p(n);
		for (int &pi : p) {
			input_ss >> pi;
		}
		int m;
		input_ss >> m;
		vector<int> a(m), b(m);
		for (int i = 0; i < m; i++) {
			input_ss >> a[i] >> b[i];
		}
		check(n, p, m, a, b);
	}
}

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc233/F";
	FUNC = &my_check;
}

TEST(abc233_problemF, case1) {
	check(6, vector<int>{5, 3, 2, 4, 6, 1}, 4, vector<int>{1, 5, 1, 2}, vector<int>{5, 6, 2, 3});
}

TEST(abc233_problemF, case2) {
	check(string("") + "5\n" + "3 4 1 2 5\n" + "2\n" + "1 3\n" + "2 5", string("") + "-1");
}

TEST(abc233_problemF, case3) {
	check(4, vector<int>{1, 2, 3, 4}, 6, vector<int>{1, 1, 1, 2, 2, 3},
		  vector<int>{2, 3, 4, 3, 4, 4});
}
