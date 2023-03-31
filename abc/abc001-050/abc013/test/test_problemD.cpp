#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc013_problemD, case1) {
	check(string("") + "5 7 1\n" + "1 4 3 4 2 3 1", string("") + "4\n" + "2\n" + "5\n" + "3\n" + "1");
}

TEST(abc013_problemD, case2) {
	check(string("") + "5 7 2\n" + "1 4 3 4 2 3 1", string("") + "3\n" + "2\n" + "1\n" + "5\n" + "4");
}

TEST(abc013_problemD, case3) {
	check(string("") + "10 20 300\n" + "9 1 2 5 8 1 9 3 5 6 4 5 4 6 8 3 2 7 9 6",
			string("") + "3\n" + "7\n" + "2\n" + "4\n" + "5\n" + "9\n" + "6\n" + "1\n" + "8\n" + "10");
}
