#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "3B\n" + "HR\n" + "2B\n" + "H", string("") + "Yes");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "2B\n" + "3B\n" + "HR\n" + "3B", string("") + "No");
}
