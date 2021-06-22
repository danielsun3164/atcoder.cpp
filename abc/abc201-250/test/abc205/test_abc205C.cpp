#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc205C";

TEST(abc205C, case1) {
	check(COMMAND, string("") + "3 2 4", string("") + ">");
}

TEST(abc205C, case2) {
	check(COMMAND, string("") + "-7 7 2", string("") + "=");
}

TEST(abc205C, case3) {
	check(COMMAND, string("") + "-8 6 3", string("") + "<");
}
