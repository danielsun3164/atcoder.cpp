#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemC";

TEST(problemC, case1) {
	check(COMMAND,
			string("") + "10\n" + "9 4\n" + "4 3\n" + "1 1\n" + "4 2\n" + "2 4\n" + "5 8\n" + "4 0\n" + "5 3\n"
					+ "0 5\n" + "5 2", string("") + "10");
}
