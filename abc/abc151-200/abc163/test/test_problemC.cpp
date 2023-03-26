#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(abc163_problemC, case1) {
	check(PATH + COMMAND, string("") + "5\n" + "1 1 2 2", string("") + "2\n" + "2\n" + "0\n" + "0\n" + "0");
}

TEST(abc163_problemC, case2) {
	check(PATH + COMMAND, string("") + "10\n" + "1 1 1 1 1 1 1 1 1",
			string("") + "9\n" + "0\n" + "0\n" + "0\n" + "0\n" + "0\n" + "0\n" + "0\n" + "0\n" + "0");
}

TEST(abc163_problemC, case3) {
	check(PATH + COMMAND, string("") + "7\n" + "1 2 3 4 5 6",
			string("") + "1\n" + "1\n" + "1\n" + "1\n" + "1\n" + "1\n" + "0");
}
