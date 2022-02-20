#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "5 2\n" + "1 3", string("") + "3");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "13 3\n" + "13 3 9", string("") + "6");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "5 5\n" + "5 2 1 4 3", string("") + "0");
}

TEST(problemD, case4) {
	check(PATH + COMMAND, string("") + "1 0\n" + "", string("") + "1");
}
