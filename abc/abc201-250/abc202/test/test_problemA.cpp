#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "1 4 3", string("") + "13");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "5 6 4", string("") + "6");
}