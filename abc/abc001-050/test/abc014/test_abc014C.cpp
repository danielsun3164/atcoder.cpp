#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc014C";

TEST(abc014C, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "0 2\n" + "2 3\n" + "2 4\n" + "5 6", string("") + "3");
}

TEST(abc014C, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "1000000 1000000\n" + "1000000 1000000\n" + "0 1000000\n" + "1 1000000",
			string("") + "4");
}
