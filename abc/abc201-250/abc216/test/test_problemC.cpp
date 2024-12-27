#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;
using ll = long long;

void my_check(string input, __attribute__((unused)) string expected) {
	istringstream input_ss(input);
	ll n, l = 0LL;
	input_ss >> n;
	Command cmd = execute(input);
	istringstream output_ss(cmd.StdOut);
	string output;
	output_ss >> output;
	for (char c : output) {
		if ('A' == c) {
			l++;
		} else {
			l <<= 1;
		}
	}
	EXPECT_EQ(n, l);
}

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc216/C";
	FUNC = &my_check;
}

TEST(abc216_problemC, case1) {
	check(string("") + "5", string("") + "AABA", string("") + "ABBA");
}

TEST(abc216_problemC, case2) {
	check(string("") + "14", string("") + "BBABBAAAB", string("") + "ABABAB");
}
