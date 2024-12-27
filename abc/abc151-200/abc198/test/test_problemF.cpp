#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemF";
	EXTERNAL = "abc198/F";
}

TEST(abc198_problemF, case1) {
	check(string("") + "8", string("") + "3");
}

TEST(abc198_problemF, case2) {
	check(string("") + "9", string("") + "5");
}

TEST(abc198_problemF, case3) {
	check(string("") + "50", string("") + "80132");
}

TEST(abc198_problemF, case4) {
	check(string("") + "10000000000", string("") + "2239716");
}
