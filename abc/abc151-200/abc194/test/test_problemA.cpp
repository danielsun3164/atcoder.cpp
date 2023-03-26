#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc194_problemA, case1) {
	check(PATH + COMMAND, string("") + "10 8", string("") + "1");
}

TEST(abc194_problemA, case2) {
	check(PATH + COMMAND, string("") + "1 2", string("") + "3");
}

TEST(abc194_problemA, case3) {
	check(PATH + COMMAND, string("") + "0 0", string("") + "4");
}
