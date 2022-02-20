#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "10 1", string("") + "15");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "FF 2", string("") + "225");
}

TEST(problemF, case3) {
	check(PATH + COMMAND, string("") + "100 2", string("") + "226");
}

TEST(problemF, case4) {
	check(PATH + COMMAND, string("") + "1A8FD02 4", string("") + "3784674");
}

TEST(problemF, case5) {
	check(PATH + COMMAND, string("") + "DEADBEEFDEADBEEEEEEEEF 16", string("") + "153954073");
}
