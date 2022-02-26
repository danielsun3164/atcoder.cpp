#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "6", string("") + "3");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "3141", string("") + "13");
}

TEST(problemF, case3) {
	check(PATH + COMMAND, string("") + "314159265358", string("") + "9");
}

TEST(problemF, case4) {
	check(PATH + COMMAND, "2", "1");
}
