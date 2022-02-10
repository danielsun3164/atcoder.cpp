#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "3 1\n" + "5 3 2\n" + "1 4 8\n" + "7 6 9",
			string("") + "19\n" + "X..\n" + "..X\n" + ".X.");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "3 2\n" + "10 10 1\n" + "10 10 1\n" + "1 1 10",
			string("") + "50\n" + "XX.\n" + "XX.\n" + "..X");
}
