#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc161_problemA, case1) {
	check(PATH + COMMAND, string("") + "1 2 3", string("") + "3 1 2");
}

TEST(abc161_problemA, case2) {
	check(PATH + COMMAND, string("") + "100 100 100", string("") + "100 100 100");
}

TEST(abc161_problemA, case3) {
	check(PATH + COMMAND, string("") + "41 59 31", string("") + "31 41 59");
}
