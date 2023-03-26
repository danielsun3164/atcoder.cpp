#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc012_problemA, case1) {
	check(PATH + COMMAND, string("") + "1 2", string("") + "2 1");
}

TEST(abc012_problemA, case2) {
	check(PATH + COMMAND, string("") + "5 5", string("") + "5 5");
}
