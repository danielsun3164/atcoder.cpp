#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc036_problemB, case1) {
	check(string("") + "4\n" + "ooxx\n" + "xoox\n" + "xxxx\n" + "xxxx",
		  string("") + "xxxo\n" + "xxoo\n" + "xxox\n" + "xxxx");
}
