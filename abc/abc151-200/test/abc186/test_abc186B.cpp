#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc186B";

TEST(abc186B, case1) {
	check(COMMAND, string("") + "2 3\n" + "2 2 3\n" + "3 2 2", string("") + "2");
}

TEST(abc186B, case2) {
	check(COMMAND, string("") + "3 3\n" + "99 99 99\n" + "99 0 99\n" + "99 99 99", string("") + "792");
}

TEST(abc186B, case3) {
	check(COMMAND, string("") + "3 2\n" + "4 4\n" + "4 4\n" + "4 4", string("") + "0");
}
