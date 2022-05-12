#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB_factorial";

TEST(joisc2007_problemB, case1) {
	check(PATH + COMMAND, string("") + "10", string("") + "5");
}

TEST(joisc2007_problemB, case2) {
	check(PATH + COMMAND, string("") + "12", string("") + "4");
}
