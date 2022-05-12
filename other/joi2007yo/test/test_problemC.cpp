#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(joi2007yo_problemC, case1) {
	check(PATH + COMMAND, string("") + "MRL", string("") + "JOI");
}

TEST(joi2007yo_problemC, case2) {
	check(PATH + COMMAND, string("") + "FURDWLD", string("") + "CROATIA");
}

TEST(joi2007yo_problemC, case3) {
	check(PATH + COMMAND, string("") + "ABC", string("") + "XYZ");
}
