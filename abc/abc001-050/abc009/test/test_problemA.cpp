#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "2", string("") + "1");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "5", string("") + "3");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "1", string("") + "1");
}
