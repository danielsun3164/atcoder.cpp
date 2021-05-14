#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc186D";

TEST(abc186D, case1) {
	check(COMMAND, string("") + "3\n" + "5 1 2", string("") + "8");
}

TEST(abc186D, case2) {
	check(COMMAND, string("") + "5\n" + "31 41 59 26 53", string("") + "176");
}
