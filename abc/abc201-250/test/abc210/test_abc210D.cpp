#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc210D";

TEST(abc210D, case1) {
	check(PATH + COMMAND, string("") + "3 4 2\n" + "1 7 7 9\n" + "9 6 3 7\n" + "7 8 6 4", string("") + "10");
}

TEST(abc210D, case2) {
	check(PATH + COMMAND,
			string("") + "3 3 1000000000\n" + "1000000 1000000 1\n" + "1000000 1000000 1000000\n" + "1 1000000 1000000",
			string("") + "1001000001");
}
