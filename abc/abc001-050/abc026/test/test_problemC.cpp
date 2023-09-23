#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
}

TEST(abc026_problemC, case1) {
	check(string("") + "5\n" + "1\n" + "1\n" + "1\n" + "1", string("") + "3");
}

TEST(abc026_problemC, case2) {
	check(string("") + "7\n" + "1\n" + "1\n" + "2\n" + "2\n" + "3\n" + "3", string("") + "7");
}

TEST(abc026_problemC, case3) {
	check(string("") + "6\n" + "1\n" + "2\n" + "3\n" + "3\n" + "2", string("") + "11");
}

TEST(abc026_problemC, case4) {
	check(string("") + "10\n" + "1\n" + "2\n" + "3\n" + "4\n" + "5\n" + "6\n" + "7\n" + "8\n" + "9",
			string("") + "1023");
}
