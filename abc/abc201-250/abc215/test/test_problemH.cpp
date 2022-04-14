#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemH";

TEST(problemH, case1) {
	check(PATH + COMMAND, string("") + "3 2\n" + "2 2 5\n" + "3 4\n" + "1 0\n" + "1 1\n" + "0 1", string("") + "2 6");
}

TEST(problemH, case2) {
	check(PATH + COMMAND, string("") + "1 1\n" + "3\n" + "4\n" + "1", string("") + "0 1");
}

TEST(problemH, case3) {
	check(PATH + COMMAND, string("") + "1 3\n" + "100\n" + "30 30 30\n" + "1 1 1", string("") + "11 892328666");
}
