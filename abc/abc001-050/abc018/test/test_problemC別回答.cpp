#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC別回答";
}

TEST(abc018_problemC別回答, case1) {
	check(string("") + "4 5 2\n" + "xoooo\n" + "oooox\n" + "ooooo\n" + "oxxoo", string("") + "3");
}

TEST(abc018_problemC別回答, case2) {
	check(string("") + "4 5 2\n" + "ooooo\n" + "oxoox\n" + "oooox\n" + "oxxoo", string("") + "0");
}

TEST(abc018_problemC別回答, case3) {
	check(
			string("") + "8 6 3\n" + "oooooo\n" + "oooooo\n" + "oooooo\n" + "oooooo\n" + "oxoooo\n" + "oooooo\n"
					+ "oooooo\n" + "oooooo", string("") + "4");
}
