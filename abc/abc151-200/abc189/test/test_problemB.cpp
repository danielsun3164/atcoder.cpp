#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "2 15\n" + "200 5\n" + "350 3", string("") + "2");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "2 10\n" + "200 5\n" + "350 3", string("") + "2");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "3 1000000\n" + "1000 100\n" + "1000 100\n" + "1000 100", string("") + "-1");
}
