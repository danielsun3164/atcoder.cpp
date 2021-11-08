#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc210E";

TEST(abc210E, case1) {
	check(COMMAND, string("") + "4 2\n" + "2 3\n" + "3 5", string("") + "11");
}

TEST(abc210E, case2) {
	check(COMMAND, string("") + "6 1\n" + "3 4", string("") + "-1");
}
