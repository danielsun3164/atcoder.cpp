#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "2 2919", string("") + "3719");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "22 3051", string("") + "3051");
}
