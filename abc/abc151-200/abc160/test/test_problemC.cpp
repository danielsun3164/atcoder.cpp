#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "20 3\n" + "5 10 15", string("") + "10");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "20 3\n" + "0 5 15", string("") + "10");
}
