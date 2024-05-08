#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "abc224/D";
}

TEST(abc224_problemD, case1) {
	check(string("") + "5\n" + "1 2\n" + "1 3\n" + "1 9\n" + "2 9\n" + "3 9\n" + "3 9 2 4 5 6 7 8", string("") + "5");
}

TEST(abc224_problemD, case2) {
	check(string("") + "5\n" + "1 2\n" + "1 3\n" + "1 9\n" + "2 9\n" + "3 9\n" + "1 2 3 4 5 6 7 8", string("") + "0");
}

TEST(abc224_problemD, case3) {
	check(
			string("") + "12\n" + "8 5\n" + "9 6\n" + "4 5\n" + "4 1\n" + "2 5\n" + "8 9\n" + "2 1\n" + "3 6\n"
					+ "8 7\n" + "6 5\n" + "7 4\n" + "2 3\n" + "1 2 3 4 5 6 8 7", string("") + "-1");
}

TEST(abc224_problemD, case4) {
	check(
			string("") + "12\n" + "6 5\n" + "5 4\n" + "4 1\n" + "4 7\n" + "8 5\n" + "2 1\n" + "2 5\n" + "6 9\n"
					+ "3 6\n" + "9 8\n" + "8 7\n" + "3 2\n" + "2 3 4 6 1 9 7 8", string("") + "16");
}
