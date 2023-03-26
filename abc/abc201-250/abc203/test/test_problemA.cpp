#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(abc203_problemA, case1) {
	check(PATH + COMMAND, string("") + "2 5 2", string("") + "5");
}

TEST(abc203_problemA, case2) {
	check(PATH + COMMAND, string("") + "4 5 6", string("") + "0");
}

TEST(abc203_problemA, case3) {
	check(PATH + COMMAND, string("") + "1 1 1", string("") + "1");
}
