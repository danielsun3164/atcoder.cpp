#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemF";
}

TEST(abc187_problemF, case1) {
	check(string("") + "3 2\n" + "1 2\n" + "1 3", string("") + "2");
}

TEST(abc187_problemF, case2) {
	check(string("") + "4 6\n" + "1 2\n" + "1 3\n" + "1 4\n" + "2 3\n" + "2 4\n" + "3 4", string("") + "1");
}

TEST(abc187_problemF, case3) {
	check(
			string("") + "10 11\n" + "9 10\n" + "2 10\n" + "8 9\n" + "3 4\n" + "5 8\n" + "1 8\n" + "5 6\n" + "2 5\n"
					+ "3 6\n" + "6 9\n" + "1 9", string("") + "5");
}

TEST(abc187_problemF, case4) {
	check(string("") + "18 0", string("") + "18");
}
