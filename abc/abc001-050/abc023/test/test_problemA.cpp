#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "23", string("") + "5");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "70", string("") + "7");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "99", string("") + "18");
}
