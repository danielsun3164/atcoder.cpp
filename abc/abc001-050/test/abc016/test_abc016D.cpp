#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc016D";

TEST(abc016D, case1) {
	check(PATH + COMMAND,
			string("") + "-2 0 2 0\n" + "4\n" + "1 1\n" + "-1 1\n" + "-1 -1\n" + "1 -1\n" + "-2 0 2 0\n" + "4\n"
					+ "1 1\n" + "-1 1\n" + "-1 -1\n" + "1 -1", string("") + "2");
}

TEST(abc016D, case2) {
	check(PATH + COMMAND,
			string("") + "-3 1 3 1\n" + "8\n" + "2 2\n" + "1 2\n" + "1 0\n" + "-1 0\n" + "-1 2\n" + "-2 2\n" + "-2 -1\n"
					+ "2 -1", string("") + "3");
}
