#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc033_problemA, case1) {
	check(PATH + COMMAND, string("") + "2222", string("") + "SAME");
}

TEST(abc033_problemA, case2) {
	check(PATH + COMMAND, string("") + "1221", string("") + "DIFFERENT");
}

TEST(abc033_problemA, case3) {
	check(PATH + COMMAND, string("") + "0000", string("") + "SAME");
}
