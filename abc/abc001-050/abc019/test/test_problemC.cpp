#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1 2 3", string("") + "2");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "2 4 8 16", string("") + "1");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "4\n" + "2 3 5 7", string("") + "4");
}
