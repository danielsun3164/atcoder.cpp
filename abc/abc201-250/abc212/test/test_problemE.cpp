#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "3 1 4\n" + "2 3", string("") + "4");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "3 3 3\n" + "1 2\n" + "1 3\n" + "2 3", string("") + "0");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "5 3 100\n" + "1 2\n" + "4 5\n" + "2 3", string("") + "428417047");
}
