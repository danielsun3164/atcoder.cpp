#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc205B";

TEST(abc205B, case1) {
	check(COMMAND, string("") + "5\n" + "3 1 2 4 5", string("") + "Yes");
}

TEST(abc205B, case2) {
	check(COMMAND, string("") + "6\n" + "3 1 4 1 5 2", string("") + "No");
}

TEST(abc205B, case3) {
	check(COMMAND, string("") + "3\n" + "1 2 3", string("") + "Yes");
}

TEST(abc205B, case4) {
	check(COMMAND, string("") + "1\n" + "1", string("") + "Yes");
}
