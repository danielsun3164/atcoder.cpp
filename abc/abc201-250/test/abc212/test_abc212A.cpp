#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc212A";

TEST(abc212A, case1) {
	check(PATH + COMMAND, string("") + "50 50", string("") + "Alloy");
}

TEST(abc212A, case2) {
	check(PATH + COMMAND, string("") + "100 0", string("") + "Gold");
}

TEST(abc212A, case3) {
	check(PATH + COMMAND, string("") + "0 100", string("") + "Silver");
}

TEST(abc212A, case4) {
	check(PATH + COMMAND, string("") + "100 2", string("") + "Alloy");
}
