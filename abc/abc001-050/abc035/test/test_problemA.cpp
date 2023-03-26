#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc035_problemA, case1) {
	check(PATH + COMMAND, string("") + "4 3", string("") + "4:3");
}

TEST(abc035_problemA, case2) {
	check(PATH + COMMAND, string("") + "16 9", string("") + "16:9");
}

TEST(abc035_problemA, case3) {
	check(PATH + COMMAND, string("") + "28 21", string("") + "4:3");
}
