#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND,
			string("") + "7\n" + "abcdbbd\n" + "6\n" + "2 3 6\n" + "1 5 z\n" + "2 1 1\n" + "1 4 a\n" + "1 7 d\n"
					+ "2 1 7", string("") + "3\n" + "1\n" + "5");
}
