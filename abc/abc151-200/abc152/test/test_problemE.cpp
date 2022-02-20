#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "2 3 4", string("") + "13");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "12 12 12 12 12", string("") + "5");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "3\n" + "1000000 999999 999998", string("") + "996989508");
}
