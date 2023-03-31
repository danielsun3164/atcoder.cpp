#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc157_problemD, case1) {
	check(string("") + "4 4 1\n" + "2 1\n" + "1 3\n" + "3 2\n" + "3 4\n" + "4 1", string("") + "0 1 0 1");
}

TEST(abc157_problemD, case2) {
	check(
			string("") + "5 10 0\n" + "1 2\n" + "1 3\n" + "1 4\n" + "1 5\n" + "3 2\n" + "2 4\n" + "2 5\n" + "4 3\n"
					+ "5 3\n" + "4 5", string("") + "0 0 0 0 0");
}

TEST(abc157_problemD, case3) {
	check(
			string("") + "10 9 3\n" + "10 1\n" + "6 7\n" + "8 2\n" + "2 5\n" + "8 4\n" + "7 3\n" + "10 9\n" + "6 4\n"
					+ "5 8\n" + "2 6\n" + "7 5\n" + "3 1", string("") + "1 3 5 4 3 3 3 3 1 0");
}
