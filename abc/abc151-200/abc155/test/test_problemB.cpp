#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "6 7 9 10 31", string("") + "APPROVED");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "28 27 24", string("") + "DENIED");
}