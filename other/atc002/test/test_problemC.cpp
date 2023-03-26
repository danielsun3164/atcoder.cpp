#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(atc002_problemC, case1) {
	check(PATH + COMMAND, string("") + "6\n" + "1 2 3 4 9 3", string("") + "53");
}
