#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc020_problemC, case1) {
	check(string("") + "2 3 10\n" + "S##\n" + ".#G", string("") + "8");
}

TEST(abc020_problemC, case2) {
	check(string("") + "3 4 7\n" + "S##G\n" + ".##.\n" + "..#.", string("") + "3");
}

TEST(abc020_problemC, case3) {
	check(string("") + "4 4 1000000000\n" + "S###\n" + "####\n" + "####\n" + "###G",
		  string("") + "199999999");
}
