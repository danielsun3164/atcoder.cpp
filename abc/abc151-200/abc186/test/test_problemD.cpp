#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "5 1 2", string("") + "8");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "31 41 59 26 53", string("") + "176");
}
