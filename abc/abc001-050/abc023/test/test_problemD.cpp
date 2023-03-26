#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc023_problemD, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "5 6\n" + "12 4\n" + "14 7\n" + "21 2", string("") + "23");
}

TEST(abc023_problemD, case2) {
	check(PATH + COMMAND, string("") + "6\n" + "100 1\n" + "100 1\n" + "100 1\n" + "100 1\n" + "100 1\n" + "1 30",
			string("") + "105");
}
