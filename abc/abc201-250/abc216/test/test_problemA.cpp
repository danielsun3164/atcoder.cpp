#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(abc216_problemA, case1) {
	check(PATH + COMMAND, string("") + "15.8", string("") + "15+");
}

TEST(abc216_problemA, case2) {
	check(PATH + COMMAND, string("") + "1.0", string("") + "1-");
}

TEST(abc216_problemA, case3) {
	check(PATH + COMMAND, string("") + "12.5", string("") + "12");
}
