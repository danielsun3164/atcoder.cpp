#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemG";
	EXTERNAL = "abc230/G";
}

TEST(abc230_problemG, case1) {
	check(string("") + "6\n" + "5 1 3 2 4 6", string("") + "6");
}

TEST(abc230_problemG, case2) {
	check(string("") + "12\n" + "1 2 3 4 5 6 7 8 9 10 11 12", string("") + "32");
}
