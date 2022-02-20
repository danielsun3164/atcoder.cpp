#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "3 3\n" + "1 2\n" + "2 3\n" + "3 1", string("") + "6");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "3 0", string("") + "27");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "4 6\n" + "1 2\n" + "2 3\n" + "3 4\n" + "2 4\n" + "1 3\n" + "1 4", string("") + "0");
}

TEST(problemD, case4) {
	check(PATH + COMMAND, string("") + "20 0", string("") + "3486784401");
}
