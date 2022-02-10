#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc158E";

TEST(abc158E, case1) {
	check(PATH + COMMAND, string("") + "4 3\n" + "3543", string("") + "6");
}

TEST(abc158E, case2) {
	check(PATH + COMMAND, string("") + "4 2\n" + "2020", string("") + "10");
}

TEST(abc158E, case3) {
	check(PATH + COMMAND, string("") + "20 11\n" + "33883322005544116655", string("") + "68");
}
