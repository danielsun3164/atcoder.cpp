#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "-10 2\n" + "10 1\n" + "10 3\n" + "5\n" + "-15 -10 -5 0 5",
			string("") + "0\n" + "0\n" + "5\n" + "10\n" + "10");
}