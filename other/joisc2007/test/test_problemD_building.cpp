#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD_building";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "9\n" + "3\n" + "7\n" + "5\n" + "9\n" + "8\n" + "10\n" + "10\n" + "11\n" + "9",
			string("") + "5");
}
