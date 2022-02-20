#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "8", string("") + "3");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "9", string("") + "5");
}

TEST(problemF, case3) {
	check(PATH + COMMAND, string("") + "50", string("") + "80132");
}

TEST(problemF, case4) {
	check(PATH + COMMAND, string("") + "10000000000", string("") + "2239716");
}
