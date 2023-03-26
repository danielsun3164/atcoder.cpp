#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(joi2006ho_problemC, case1) {
	check(PATH + COMMAND, string("") + "5",
			string("") + "5\n" + "4 1\n" + "3 2\n" + "3 1 1\n" + "2 2 1\n" + "2 1 1 1\n" + "1 1 1 1 1");
}
