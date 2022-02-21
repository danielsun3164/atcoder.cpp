#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "2 3 10\n" + "S##\n" + ".#G", string("") + "8");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "3 4 7\n" + "S##G\n" + ".##.\n" + "..#.", string("") + "3");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "4 4 1000000000\n" + "S###\n" + "####\n" + "####\n" + "###G",
			string("") + "199999999");
}
