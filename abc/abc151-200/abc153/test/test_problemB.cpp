#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "10 3\n" + "4 5 6", string("") + "Yes");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "20 3\n" + "4 5 6", string("") + "No");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "210 5\n" + "31 41 59 26 53", string("") + "Yes");
}

TEST(problemB, case4) {
	check(PATH + COMMAND, string("") + "211 5\n" + "31 41 59 26 53", string("") + "No");
}
