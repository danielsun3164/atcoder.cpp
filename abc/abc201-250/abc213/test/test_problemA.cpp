#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "3 6", string("") + "5");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "10 12", string("") + "6");
}