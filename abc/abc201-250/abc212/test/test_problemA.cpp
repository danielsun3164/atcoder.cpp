#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "50 50", string("") + "Alloy");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "100 0", string("") + "Gold");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "0 100", string("") + "Silver");
}

TEST(problemA, case4) {
	check(PATH + COMMAND, string("") + "100 2", string("") + "Alloy");
}
