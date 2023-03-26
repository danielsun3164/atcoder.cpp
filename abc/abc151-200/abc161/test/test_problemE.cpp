#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(abc161_problemE, case1) {
	check(PATH + COMMAND, string("") + "11 3 2\n" + "ooxxxoxxxoo", string("") + "6");
}

TEST(abc161_problemE, case2) {
	check(PATH + COMMAND, string("") + "5 2 3\n" + "ooxoo", string("") + "1\n" + "5");
}

TEST(abc161_problemE, case3) {
	check_empty(PATH + COMMAND, string("") + "5 1 0\n" + "ooooo");
}

TEST(abc161_problemE, case4) {
	check(PATH + COMMAND, string("") + "16 4 3\n" + "ooxxoxoxxxoxoxxo", string("") + "11\n" + "16");
}
