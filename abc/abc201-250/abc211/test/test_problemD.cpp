#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc211_problemD, case1) {
	check(string("") + "4 5\n" + "2 4\n" + "1 2\n" + "2 3\n" + "1 3\n" + "3 4", string("") + "2");
}

TEST(abc211_problemD, case2) {
	check(string("") + "4 3\n" + "1 3\n" + "2 3\n" + "2 4", string("") + "1");
}

TEST(abc211_problemD, case3) {
	check(string("") + "2 0", string("") + "0");
}

TEST(abc211_problemD, case4) {
	check(string("") + "7 8\n" + "1 3\n" + "1 4\n" + "2 3\n" + "2 4\n" + "2 5\n" + "2 6\n" + "5 7\n" + "6 7",
			string("") + "4");
}
