#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemJ";

TEST(problemJ, case1) {
	check(PATH + COMMAND, string("") + "5 5\n" + "1 2 3 2 1\n" + "2 1 5\n" + "3 2 3\n" + "1 3 1\n" + "2 2 4\n" + "3 1 3",
			string("") + "3\n" + "3\n" + "2\n" + "6");
}
