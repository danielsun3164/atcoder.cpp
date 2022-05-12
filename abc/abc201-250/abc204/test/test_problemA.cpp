#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(abc204_problemA, case1) {
	check(PATH + COMMAND, string("") + "0 1", string("") + "2");
}

TEST(abc204_problemA, case2) {
	check(PATH + COMMAND, string("") + "0 0", string("") + "0");
}
