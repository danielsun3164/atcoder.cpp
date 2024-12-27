#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;
using ll = long long;

ll f(ll b, ll n) {
	if (0LL == n) {
		return 0LL;
	}
	return f(b, n / b) + n % b;
}

void check(ll n, ll s) {
	Command cmd = execute(to_string(n) + "\n" + to_string(s));
	istringstream output_ss(cmd.StdOut);
	ll result;
	output_ss >> result;
	EXPECT_EQ(s, f(result, n));
}

void my_check(string input, string expected) {
	istringstream expected_ss(expected);
	ll result;
	expected_ss >> result;
	if (-1LL == result) {
		check_from_file(input, expected);
	} else {
		istringstream input_ss(input);
		ll n, s;
		input_ss >> n >> s;
		check(n, s);
	}
}

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC060/D";
	FUNC = &my_check;
}

TEST(abc044_problemD, case1) {
	check(87654LL, 30LL);
}

TEST(abc044_problemD, case2) {
	check(87654LL, 138LL);
}

TEST(abc044_problemD, case3) {
	check(string("") + "87654\n" + "45678", string("") + "-1");
}

TEST(abc044_problemD, case4) {
	check(31415926535LL, 1LL);
}

TEST(abc044_problemD, case5) {
	check(string("") + "1\n" + "31415926535", string("") + "-1");
}
