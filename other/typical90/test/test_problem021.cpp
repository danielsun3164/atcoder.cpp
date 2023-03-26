#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem021";

TEST(typical90_problem021, case1) {
	check(PATH + COMMAND, string("") + "4 7\n" + "1 2\n" + "2 1\n" + "2 3\n" + "4 3\n" + "4 1\n" + "1 4\n" + "2 3",
			string("") + "3");
}

TEST(typical90_problem021, case2) {
	check(PATH + COMMAND, string("") + "100 1\n" + "1 2", string("") + "0");
}
