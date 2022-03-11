#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "5 7 4", string("") + "2");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "11 10 9", string("") + "9");
}
