#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc188_problemA, case1) {
	check(PATH + COMMAND, string("") + "3 5", string("") + "Yes");
}

TEST(abc188_problemA, case2) {
	check(PATH + COMMAND, string("") + "16 2", string("") + "No");
}

TEST(abc188_problemA, case3) {
	check(PATH + COMMAND, string("") + "12 15", string("") + "No");
}
