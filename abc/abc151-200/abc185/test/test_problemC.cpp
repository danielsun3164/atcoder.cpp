#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "12", string("") + "1");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "13", string("") + "12");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "17", string("") + "4368");
}
