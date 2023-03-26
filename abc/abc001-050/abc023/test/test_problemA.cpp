#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc023_problemA, case1) {
	check(PATH + COMMAND, string("") + "23", string("") + "5");
}

TEST(abc023_problemA, case2) {
	check(PATH + COMMAND, string("") + "70", string("") + "7");
}

TEST(abc023_problemA, case3) {
	check(PATH + COMMAND, string("") + "99", string("") + "18");
}
