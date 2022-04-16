#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "1 1\n" + "2 2\n" + "3 4\n" + "4 8",
			string("") + "0\n" + "1\n" + "4\n" + "11\n" + "26\n" + "36\n" + "40\n" + "32");
}
