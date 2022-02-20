#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1\n" + "2\n" + "3", string("") + "1");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "3\n" + "3\n" + "3", string("") + "3");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "3\n" + "1\n" + "4\n" + "1\n" + "5", string("") + "1");
}
