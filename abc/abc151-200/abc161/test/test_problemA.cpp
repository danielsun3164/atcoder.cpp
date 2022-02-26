#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "1 2 3", string("") + "3 1 2");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "100 100 100", string("") + "100 100 100");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "41 59 31", string("") + "31 41 59");
}
