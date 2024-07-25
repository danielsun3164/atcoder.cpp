#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc230/H";
}

TEST(abc230_problemH, case1) {
	check(string("") + "4 1\n" + "1", string("") + "1\n" + "2\n" + "4");
}

TEST(abc230_problemH, case2) {
	check(string("") + "10 10\n" + "1 2 3 4 5 6 7 8 9 10", string("") + "1\n" + "3\n" + "7\n" +
															   "18\n" + "45\n" + "121\n" + "325\n" +
															   "904\n" + "2546");
}
