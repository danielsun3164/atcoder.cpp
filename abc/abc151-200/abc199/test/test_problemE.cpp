#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "3 1\n" + "2 2 1", string("") + "4");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "5 2\n" + "3 3 2\n" + "4 4 3", string("") + "90");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "18 0", string("") + "6402373705728000");
}
