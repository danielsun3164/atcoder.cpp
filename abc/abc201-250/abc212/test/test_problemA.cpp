#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemA";

TEST(abc212_problemA, case1) {
	check(PATH + COMMAND, string("") + "50 50", string("") + "Alloy");
}

TEST(abc212_problemA, case2) {
	check(PATH + COMMAND, string("") + "100 0", string("") + "Gold");
}

TEST(abc212_problemA, case3) {
	check(PATH + COMMAND, string("") + "0 100", string("") + "Silver");
}

TEST(abc212_problemA, case4) {
	check(PATH + COMMAND, string("") + "100 2", string("") + "Alloy");
}
