#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemD";
}

TEST(abc040_problemD, case1) {
	check(
			string("") + "5 4\n" + "1 2 2000\n" + "2 3 2004\n" + "3 4 1999\n" + "4 5 2001\n" + "3\n" + "1 2000\n"
					+ "1 1999\n" + "3 1995", string("") + "1\n" + "3\n" + "5");
}

TEST(abc040_problemD, case2) {
	check(
			string("") + "4 5\n" + "1 2 2005\n" + "3 1 2001\n" + "3 4 2002\n" + "1 4 2004\n" + "4 2 2003\n" + "5\n"
					+ "1 2003\n" + "2 2003\n" + "1 2001\n" + "3 2003\n" + "4 2004",
			string("") + "3\n" + "3\n" + "4\n" + "1\n" + "1");
}

TEST(abc040_problemD, case3) {
	check(
			string("") + "4 5\n" + "1 2 10\n" + "1 2 1000\n" + "2 3 10000\n" + "2 3 100000\n" + "3 1 200000\n" + "4\n"
					+ "1 0\n" + "2 10000\n" + "3 100000\n" + "4 0", string("") + "3\n" + "3\n" + "2\n" + "1");
}
