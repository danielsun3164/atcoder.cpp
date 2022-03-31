#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "M+MM-M", string("") + "2");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "MMM+M", string("") + "1");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "MMM+--MMM", string("") + "3");
}

TEST(problemD, case4) {
	check(PATH + COMMAND, string("") + "+", string("") + "0");
}
