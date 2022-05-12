#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc009_problemA, case1) {
	check(PATH + COMMAND, string("") + "2", string("") + "1");
}

TEST(abc009_problemA, case2) {
	check(PATH + COMMAND, string("") + "5", string("") + "3");
}

TEST(abc009_problemA, case3) {
	check(PATH + COMMAND, string("") + "1", string("") + "1");
}
