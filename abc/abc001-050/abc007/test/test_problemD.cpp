#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc007_problemD, case1) {
	check(PATH + COMMAND, string("") + "1 9", string("") + "2");
}

TEST(abc007_problemD, case2) {
	check(PATH + COMMAND, string("") + "40 49", string("") + "10");
}

TEST(abc007_problemD, case3) {
	check(PATH + COMMAND, string("") + "1 1000", string("") + "488");
}

TEST(abc007_problemD, case4) {
	check(PATH + COMMAND, string("") + "1 1000000000000000000", string("") + "981985601490518016");
}
