#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc185D";

TEST(abc185D, case1) {
	check(COMMAND, string("") + "5 2\n" + "1 3", string("") + "3");
}

TEST(abc185D, case2) {
	check(COMMAND, string("") + "13 3\n" + "13 3 9", string("") + "6");
}

TEST(abc185D, case3) {
	check(COMMAND, string("") + "5 5\n" + "5 2 1 4 3", string("") + "0");
}

TEST(abc185D, case4) {
	check(COMMAND, string("") + "1 0\n" + "", string("") + "1");
}
