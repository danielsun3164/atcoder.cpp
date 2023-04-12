#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemD";
	EXTERNAL = "abc209/D";
}

TEST(abc209_problemD, case1) {
	check(string("") + "4 1\n" + "1 2\n" + "2 3\n" + "2 4\n" + "1 2", string("") + "Road");
}

TEST(abc209_problemD, case2) {
	check(string("") + "5 2\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 5\n" + "1 3\n" + "1 5",
			string("") + "Town\n" + "Town");
}

TEST(abc209_problemD, case3) {
	check(
			string("") + "9 9\n" + "2 3\n" + "5 6\n" + "4 8\n" + "8 9\n" + "4 5\n" + "3 4\n" + "1 9\n" + "3 7\n"
					+ "7 9\n" + "2 5\n" + "2 6\n" + "4 6\n" + "2 4\n" + "5 8\n" + "7 8\n" + "3 6\n" + "5 6",
			string("") + "Town\n" + "Road\n" + "Town\n" + "Town\n" + "Town\n" + "Town\n" + "Road\n" + "Road\n"
					+ "Road");
}
