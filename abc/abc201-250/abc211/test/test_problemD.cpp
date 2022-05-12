#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemD";

TEST(abc211_problemD, case1) {
	check(PATH + COMMAND, string("") + "4 5\n" + "2 4\n" + "1 2\n" + "2 3\n" + "1 3\n" + "3 4", string("") + "2");
}

TEST(abc211_problemD, case2) {
	check(PATH + COMMAND, string("") + "4 3\n" + "1 3\n" + "2 3\n" + "2 4", string("") + "1");
}

TEST(abc211_problemD, case3) {
	check(PATH + COMMAND, string("") + "2 0", string("") + "0");
}

TEST(abc211_problemD, case4) {
	check(PATH + COMMAND, string("") + "7 8\n" + "1 3\n" + "1 4\n" + "2 3\n" + "2 4\n" + "2 5\n" + "2 6\n" + "5 7\n" + "6 7",
			string("") + "4");
}
