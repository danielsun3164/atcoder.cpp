#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc034_problemA, case1) {
	check(PATH + COMMAND, string("") + "12 34", string("") + "Better");
}

TEST(abc034_problemA, case2) {
	check(PATH + COMMAND, string("") + "98 56", string("") + "Worse");
}
