#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "12", string("") + "5");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "345", string("") + "175");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "999999999", string("") + "900000000");
}
