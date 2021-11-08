#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc003D";

TEST(abc003D, case1) {
	check(COMMAND, string("") + "3 2\n" + "2 2\n" + "2 2", string("") + "12");
}

TEST(abc003D, case2) {
	check(COMMAND, string("") + "4 5\n" + "3 1\n" + "3 0", string("") + "10");
}

TEST(abc003D, case3) {
	check(COMMAND, string("") + "23 18\n" + "15 13\n" + "100 95", string("") + "364527243");
}

TEST(abc003D, case4) {
	check(COMMAND, string("") + "30 30\n" + "24 22\n" + "145 132", string("") + "976668549");
}
