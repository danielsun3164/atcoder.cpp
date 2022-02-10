#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemJ_fiber";

TEST(problemJ, case1) {
	check(PATH + COMMAND, string("") + "8\n" + "7\n" + "3 5\n" + "4 1\n" + "5 4\n" + "7 5\n" + "4 7\n" + "1 4\n" + "6 8",
			string("") + "2");
}
