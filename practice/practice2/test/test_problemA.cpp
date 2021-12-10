#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND,
			string("") + "4 7\n" + "1 0 1\n" + "0 0 1\n" + "0 2 3\n" + "1 0 1\n" + "1 1 2\n" + "0 0 2\n" + "1 1 3",
			string("") + "0\n" + "1\n" + "0\n" + "1");
}
