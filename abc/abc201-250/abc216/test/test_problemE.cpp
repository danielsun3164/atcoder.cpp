#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(abc216_problemE, case1) {
	check(PATH + COMMAND, string("") + "3 5\n" + "100 50 102", string("") + "502");
}

TEST(abc216_problemE, case2) {
	check(PATH + COMMAND, string("") + "2 2021\n" + "2 3", string("") + "9");
}
