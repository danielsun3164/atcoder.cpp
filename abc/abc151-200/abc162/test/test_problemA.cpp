#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "117", string("") + "Yes");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "123", string("") + "No");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "777", string("") + "Yes");
}
