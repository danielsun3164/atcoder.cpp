#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc001_problemA, case1) {
	check(PATH + COMMAND, string("") + "15\n" + "10", string("") + "5");
}

TEST(abc001_problemA, case2) {
	check(PATH + COMMAND, string("") + "0\n" + "0", string("") + "0");
}

TEST(abc001_problemA, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "20", string("") + "-15");
}
