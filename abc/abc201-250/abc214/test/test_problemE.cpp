#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND,
			string("") + "2\n" + "3\n" + "1 2\n" + "2 3\n" + "3 3\n" + "5\n" + "1 2\n" + "2 3\n" + "3 3\n" + "1 3\n"
					+ "999999999 1000000000", string("") + "Yes\n" + "No");
}
