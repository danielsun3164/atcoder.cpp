#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "2 2 1 2", string("") + "4");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "3 3 4 1", string("") + "18");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "4 4 8 0", string("") + "36");
}
