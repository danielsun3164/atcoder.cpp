#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc004_problemA, case1) {
	check(PATH + COMMAND, string("") + "1000", string("") + "2000");
}

TEST(abc004_problemA, case2) {
	check(PATH + COMMAND, string("") + "1000000", string("") + "2000000");
}

TEST(abc004_problemA, case3) {
	check(PATH + COMMAND, string("") + "0", string("") + "0");
}
