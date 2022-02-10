#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "MRL", string("") + "JOI");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "FURDWLD", string("") + "CROATIA");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "ABC", string("") + "XYZ");
}
