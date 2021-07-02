#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc204E";

TEST(abc204E, case1) {
	check(COMMAND, string("") + "2 1\n" + "1 2 2 3", string("") + "4");
}

TEST(abc204E, case2) {
	check(COMMAND, string("") + "2 3\n" + "1 2 2 3\n" + "1 2 2 1\n" + "1 1 1 1", string("") + "3");
}

TEST(abc204E, case3) {
	check(COMMAND, string("") + "4 2\n" + "1 2 3 4\n" + "3 4 5 6", string("") + "-1");
}

TEST(abc204E, case4) {
	check(COMMAND,
			string("") + "6 9\n" + "1 1 0 0\n" + "1 3 1 2\n" + "1 5 2 3\n" + "5 2 16 5\n" + "2 6 1 10\n" + "3 4 3 4\n"
					+ "3 5 3 10\n" + "5 6 1 100\n" + "4 2 0 110", string("") + "20");
}