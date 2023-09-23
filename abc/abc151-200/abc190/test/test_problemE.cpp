#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemE";
	EXTERNAL = "ABC190/E";
}

TEST(abc190_problemE, case1) {
	check(string("") + "4 3\n" + "1 4\n" + "2 4\n" + "3 4\n" + "3\n" + "1 2 3", string("") + "5");
}

TEST(abc190_problemE, case2) {
	check(string("") + "4 3\n" + "1 4\n" + "2 4\n" + "1 2\n" + "3\n" + "1 2 3", string("") + "-1");
}

TEST(abc190_problemE, case3) {
	check(
			string("") + "10 10\n" + "3 9\n" + "3 8\n" + "8 10\n" + "2 10\n" + "5 8\n" + "6 8\n" + "5 7\n" + "6 7\n"
					+ "1 6\n" + "2 4\n" + "4\n" + "1 2 7 9", string("") + "11");
}
