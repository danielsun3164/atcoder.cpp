#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "a", string("") + "b");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "y", string("") + "z");
}