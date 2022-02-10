#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc010B";

TEST(abc010B, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "5 8 2", string("") + "4");
}

TEST(abc010B, case2) {
	check(PATH + COMMAND, string("") + "9\n" + "1 2 3 4 5 6 7 8 9", string("") + "8");
}
