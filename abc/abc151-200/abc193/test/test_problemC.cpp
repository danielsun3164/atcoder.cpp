#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "8", string("") + "6");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "100000", string("") + "99634");
}
