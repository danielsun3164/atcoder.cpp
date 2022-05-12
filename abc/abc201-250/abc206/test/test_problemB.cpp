#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(abc206_problemB, case1) {
	check(PATH + COMMAND, string("") + "12", string("") + "5");
}

TEST(abc206_problemB, case2) {
	check(PATH + COMMAND, string("") + "100128", string("") + "447");
}
