#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "1 1 2", string("") + "2");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "4 3 4", string("") + "3");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "5 5 5", string("") + "5");
}
