#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "214", string("") + "8");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "1", string("") + "4");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "126", string("") + "6");
}