#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "AND\n" + "OR", string("") + "5");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "OR\n" + "OR\n" + "OR\n" + "OR\n" + "OR", string("") + "63");
}
