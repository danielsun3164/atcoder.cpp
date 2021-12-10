#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemH_route";

TEST(problemH, case1) {
	check(PATH + COMMAND,
			string("") + "5 6\n" + "0 0\n" + "10 10\n" + "0 10\n" + "10 0\n" + "2 -6\n" + "1 2 30\n" + "1 3 4\n"
					+ "1 4 5\n" + "1 5 1\n" + "2 4 3\n" + "2 5 1", string("") + "8");
}
