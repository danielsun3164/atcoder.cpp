#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "1 2 3 4 5", string("") + "10");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "1 2 3 5 8", string("") + "14");
}
