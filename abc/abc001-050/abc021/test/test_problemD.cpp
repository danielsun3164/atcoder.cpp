#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "10\n" + "2", string("") + "55");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "10\n" + "3", string("") + "220");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "10\n" + "4", string("") + "715");
}

TEST(problemD, case4) {
	check(PATH + COMMAND, string("") + "400\n" + "296", string("") + "546898535");
}

TEST(problemD, case5) {
	check(PATH + COMMAND, string("") + "100000\n" + "100000", string("") + "939733670");
}
