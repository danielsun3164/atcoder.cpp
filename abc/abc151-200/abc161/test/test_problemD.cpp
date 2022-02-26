#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "15", string("") + "23");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "1", string("") + "1");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "13", string("") + "21");
}

TEST(problemD, case4) {
	check(PATH + COMMAND, "100000", "3234566667");
}
