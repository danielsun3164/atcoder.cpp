#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc031_problemA, case1) {
	check(PATH + COMMAND, string("") + "31 87", string("") + "2784");
}

TEST(abc031_problemA, case2) {
	check(PATH + COMMAND, string("") + "101 65", string("") + "6666");
}

TEST(abc031_problemA, case3) {
	check(PATH + COMMAND, string("") + "3 3", string("") + "12");
}
