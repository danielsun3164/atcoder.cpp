#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "4 1\n" + "5 4 2 1", string("") + "Yes");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "3 2\n" + "380 19 1", string("") + "No");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "12 3\n" + "4 56 78 901 2 345 67 890 123 45 6 789", string("") + "Yes");
}
