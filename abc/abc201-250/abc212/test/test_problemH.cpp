#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemH";

TEST(problemH, case1) {
	check(PATH + COMMAND, string("") + "2 2\n" + "1 2", string("") + "4");
}

TEST(problemH, case2) {
	check(PATH + COMMAND, string("") + "100 3\n" + "3 5 7", string("") + "112184936");
}
