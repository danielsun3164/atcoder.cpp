#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc020_problemA, case1) {
	check(PATH + COMMAND, string("") + "1", string("") + "ABC");
}

TEST(abc020_problemA, case2) {
	check(PATH + COMMAND, string("") + "2", string("") + "chokudai");
}
