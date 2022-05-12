#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc026_problemA, case1) {
	check(PATH + COMMAND, string("") + "10", string("") + "25");
}

TEST(abc026_problemA, case2) {
	check(PATH + COMMAND, string("") + "60", string("") + "900");
}
