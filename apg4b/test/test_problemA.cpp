#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(apg4b_problemA, case1) {
	check(PATH + COMMAND, string(""), string("") + "Hello, world!");
}
