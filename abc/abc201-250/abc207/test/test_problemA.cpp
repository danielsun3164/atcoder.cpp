#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "3 4 5", string("") + "9");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "6 6 6", string("") + "12");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "99 99 98", string("") + "198");
}
