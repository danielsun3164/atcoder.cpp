#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "ex22";

TEST(apg4b_ex22, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "5 2\n" + "2 7\n" + "4 1", string("") + "4 1\n" + "5 2\n" + "2 7");
}

TEST(apg4b_ex22, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "1 2\n" + "3 4\n" + "5 6\n" + "7 8\n" + "9 10",
			string("") + "1 2\n" + "3 4\n" + "5 6\n" + "7 8\n" + "9 10");
}
