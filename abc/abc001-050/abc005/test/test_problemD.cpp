#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc005_problemD, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "3 2 1\n" + "2 2 1\n" + "1 1 1\n" + "3\n" + "1\n" + "4\n" + "9",
			string("") + "3\n" + "9\n" + "14");
}

TEST(abc005_problemD, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "1 1 1\n" + "1 1 1\n" + "9 9 9\n" + "1\n" + "4", string("") + "27");
}
