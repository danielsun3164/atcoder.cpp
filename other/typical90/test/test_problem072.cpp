#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem072";

TEST(typical90_problem072, case1) {
	check(PATH + COMMAND, string("") + "3 3\n" + "...\n" + ".#.\n" + "...", string("") + "8");
}

TEST(typical90_problem072, case2) {
	check(PATH + COMMAND, string("") + "1 6\n" + "......", string("") + "-1");
}

TEST(typical90_problem072, case3) {
	check(PATH + COMMAND, string("") + "4 4\n" + "....\n" + "#...\n" + "....\n" + "...#", string("") + "12");
}
