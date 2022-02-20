#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "4 3\n" + "3543", string("") + "6");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "4 2\n" + "2020", string("") + "10");
}

TEST(problemE, case3) {
	check(PATH + COMMAND, string("") + "20 11\n" + "33883322005544116655", string("") + "68");
}
