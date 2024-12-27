#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc208/E";
}

TEST(abc208_problemE, case1) {
	check(string("") + "13 2", string("") + "5");
}

TEST(abc208_problemE, case2) {
	check(string("") + "100 80", string("") + "99");
}

TEST(abc208_problemE, case3) {
	check(string("") + "1000000000000000000 1000000000", string("") + "841103275147365677");
}
