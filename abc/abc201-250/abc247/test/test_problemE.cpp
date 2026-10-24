#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemE";
	EXTERNAL = "abc247/E";
}

TEST(abc247_problemE, case1) {
	check(string("") + "4 3 1\n" + "1 2 3 1", string("") + "4");
}

TEST(abc247_problemE, case2) {
	check(string("") + "5 2 1\n" + "1 3 2 4 1", string("") + "0");
}

TEST(abc247_problemE, case3) {
	check(string("") + "5 1 1\n" + "1 1 1 1 1", string("") + "15");
}

TEST(abc247_problemE, case4) {
	check(string("") + "10 8 1\n" + "2 7 1 8 2 8 1 8 2 8", string("") + "36");
}
