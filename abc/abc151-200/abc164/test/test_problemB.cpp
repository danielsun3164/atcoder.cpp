#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "10 9 10 10", string("") + "No");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "46 4 40 5", string("") + "Yes");
}
