#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(joi2006yo_problemD, case1) {
	check(string("") + "3 10\n" + "0\n" + "1 1\n" + "2 2 3", string("") + "9");
}

TEST(joi2006yo_problemD, case2) {
	check(string("") + "4 20\n" + "2 1 2\n" + "1 3\n" + "1 4", string("") + "3");
}

TEST(joi2006yo_problemD, case3) {
	check(string("") + "2 5\n" + "2 1 2\n" + "0\n" + "0", string("") + "0");
}

TEST(joi2006yo_problemD, case4) {
	check(string("") + "3 3\n" + "0\n" + "1 1\n" + "2 2 3", string("") + "-1");
}
