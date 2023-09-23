#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemF";
	EXTERNAL = "abc218/F";
}

TEST(abc218_problemF, case1) {
	check(string("") + "3 3\n" + "1 2\n" + "1 3\n" + "2 3", string("") + "1\n" + "2\n" + "1");
}

TEST(abc218_problemF, case2) {
	check(string("") + "4 4\n" + "1 2\n" + "2 3\n" + "2 4\n" + "3 4", string("") + "-1\n" + "2\n" + "3\n" + "2");
}

TEST(abc218_problemF, case3) {
	check(
			string("") + "5 10\n" + "1 2\n" + "1 4\n" + "1 5\n" + "2 1\n" + "2 3\n" + "3 1\n" + "3 2\n" + "3 5\n"
					+ "4 2\n" + "4 3",
			string("") + "1\n" + "1\n" + "3\n" + "1\n" + "1\n" + "1\n" + "1\n" + "1\n" + "1\n" + "1");
}

TEST(abc218_problemF, case4) {
	check(string("") + "4 1\n" + "1 2", string("") + "-1");
}
