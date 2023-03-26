#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc153_problemD, case1) {
	check(PATH + COMMAND, string("") + "2", string("") + "3");
}

TEST(abc153_problemD, case2) {
	check(PATH + COMMAND, string("") + "4", string("") + "7");
}

TEST(abc153_problemD, case3) {
	check(PATH + COMMAND, string("") + "1000000000000", string("") + "1099511627775");
}
