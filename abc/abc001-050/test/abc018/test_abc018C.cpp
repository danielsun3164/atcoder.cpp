#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc018C";

TEST(abc018C, case1) {
	check(PATH + COMMAND, string("") + "4 5 2\n" + "xoooo\n" + "oooox\n" + "ooooo\n" + "oxxoo", string("") + "3");
}

TEST(abc018C, case2) {
	check(PATH + COMMAND, string("") + "4 5 2\n" + "ooooo\n" + "oxoox\n" + "oooox\n" + "oxxoo", string("") + "0");
}

TEST(abc018C, case3) {
	check(PATH + COMMAND,
			string("") + "8 6 3\n" + "oooooo\n" + "oooooo\n" + "oooooo\n" + "oooooo\n" + "oxoooo\n" + "oooooo\n"
					+ "oooooo\n" + "oooooo", string("") + "4");
}
