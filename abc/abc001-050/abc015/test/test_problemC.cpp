#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "3 4\n" + "1 3 5 17\n" + "2 4 2 3\n" + "1 3 2 9", string("") + "Found");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "5 3\n" + "89 62 15\n" + "44 36 17\n" + "4 24 24\n" + "25 98 99\n" + "66 33 57",
			string("") + "Nothing");
}
