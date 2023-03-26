#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(abc165_problemE, case1) {
	check(PATH + COMMAND, string("") + "4 1", string("") + "2 3");
}

TEST(abc165_problemE, case2) {
	check(PATH + COMMAND, string("") + "7 3", string("") + "1 3\n" + "4 7\n" + "5 6");
}
