#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(abc160_problemE, case1) {
	check(PATH + COMMAND, string("") + "1 2 2 2 1\n" + "2 4\n" + "5 1\n" + "3", string("") + "12");
}

TEST(abc160_problemE, case2) {
	check(PATH + COMMAND, string("") + "2 2 2 2 2\n" + "8 6\n" + "9 1\n" + "2 1", string("") + "25");
}

TEST(abc160_problemE, case3) {
	check(PATH + COMMAND, string("") + "2 2 4 4 4\n" + "11 12 13 14\n" + "21 22 23 24\n" + "1 2 3 4",
			string("") + "74");
}
