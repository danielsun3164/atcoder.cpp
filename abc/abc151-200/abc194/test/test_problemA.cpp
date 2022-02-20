#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "10 8", string("") + "1");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "1 2", string("") + "3");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "0 0", string("") + "4");
}
