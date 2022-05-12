#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc027_problemA, case1) {
	check(PATH + COMMAND, string("") + "1 1 2", string("") + "2");
}

TEST(abc027_problemA, case2) {
	check(PATH + COMMAND, string("") + "4 3 4", string("") + "3");
}

TEST(abc027_problemA, case3) {
	check(PATH + COMMAND, string("") + "5 5 5", string("") + "5");
}
