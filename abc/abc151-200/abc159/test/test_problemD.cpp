#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc159_problemD, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "1 1 2 1 2", string("") + "2\n" + "2\n" + "3\n" + "2\n" + "3");
}

TEST(abc159_problemD, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "1 2 3 4", string("") + "0\n" + "0\n" + "0\n" + "0");
}

TEST(abc159_problemD, case3) {
	check(PATH + COMMAND, string("") + "5\n" + "3 3 3 3 3", string("") + "6\n" + "6\n" + "6\n" + "6\n" + "6");
}

TEST(abc159_problemD, case4) {
	check(PATH + COMMAND, string("") + "8\n" + "1 2 1 4 2 1 4 1",
			string("") + "5\n" + "7\n" + "5\n" + "7\n" + "7\n" + "5\n" + "7\n" + "5");
}
