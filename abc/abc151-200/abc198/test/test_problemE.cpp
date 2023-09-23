#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "abc198/E";
}

TEST(abc198_problemE, case1) {
	check(string("") + "6\n" + "2 7 1 8 2 8\n" + "1 2\n" + "3 6\n" + "3 2\n" + "4 3\n" + "2 5",
			string("") + "1\n" + "2\n" + "3\n" + "4\n" + "6");
}

TEST(abc198_problemE, case2) {
	check(
			string("") + "10\n" + "3 1 4 1 5 9 2 6 5 3\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 5\n" + "5 6\n" + "6 7\n"
					+ "7 8\n" + "8 9\n" + "9 10", string("") + "1\n" + "2\n" + "3\n" + "5\n" + "6\n" + "7\n" + "8");
}
