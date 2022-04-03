#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "abc", string("") + "4");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "aa", string("") + "1");
}

TEST(problemF, case3) {
	check(PATH + COMMAND, string("") + "acba", string("") + "6");
}

TEST(problemF, case4) {
	check(PATH + COMMAND, string("") + "chokudai", string("") + "54");
}
