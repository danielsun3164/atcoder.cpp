#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc013_problemA, case1) {
	check(PATH + COMMAND, string("") + "A", string("") + "1");
}

TEST(abc013_problemA, case2) {
	check(PATH + COMMAND, string("") + "B", string("") + "2");
}

TEST(abc013_problemA, case3) {
	check(PATH + COMMAND, string("") + "C", string("") + "3");
}

TEST(abc013_problemA, case4) {
	check(PATH + COMMAND, string("") + "D", string("") + "4");
}
