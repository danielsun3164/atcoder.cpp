#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "2 4", string("") + "3");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "10 100", string("") + "91");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "3 2", string("") + "0");
}
