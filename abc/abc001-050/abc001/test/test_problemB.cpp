#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "15000", string("") + "65");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "75000", string("") + "89");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "200", string("") + "02");
}
