#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "140", string("") + "60");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "1000", string("") + "100");
}