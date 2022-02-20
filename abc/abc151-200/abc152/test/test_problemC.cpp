#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "4 2 5 1 3", string("") + "3");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "4 3 2 1", string("") + "4");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "6\n" + "1 2 3 4 5 6", string("") + "1");
}

TEST(problemC, case4) {
	check(PATH + COMMAND, string("") + "8\n" + "5 7 4 2 6 8 1 3", string("") + "4");
}

TEST(problemC, case5) {
	check(PATH + COMMAND, string("") + "1\n" + "1", string("") + "1");
}
