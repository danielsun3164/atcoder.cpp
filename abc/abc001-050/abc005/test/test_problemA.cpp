#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "4 8", string("") + "2");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "4 7", string("") + "1");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "4 3", string("") + "0");
}
