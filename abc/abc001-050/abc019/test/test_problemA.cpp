#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "2 3 4", string("") + "3");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "5 100 5", string("") + "5");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "3 3 3", string("") + "3");
}

TEST(problemA, case4) {
	check(PATH + COMMAND, string("") + "3 3 4", string("") + "3");
}
