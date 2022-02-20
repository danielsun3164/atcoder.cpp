#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "20", string("") + "17");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "100000", string("") + "30555");
}
