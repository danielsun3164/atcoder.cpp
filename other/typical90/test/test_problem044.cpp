#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problem044";
	EXTERNAL = "typical90/044";
}

TEST(typical90_problem044, case1) {
	check(string("") + "8 5\n" + "6 17 2 4 17 19 1 7\n" + "2 0 0\n" + "1 7 2\n" + "1 2 6\n" + "1 4 5\n" + "3 4 0",
			string("") + "4");
}

TEST(typical90_problem044, case2) {
	check(
			string("") + "9 6\n" + "16 7 10 2 9 18 15 20 5\n" + "2 0 0\n" + "1 1 4\n" + "2 0 0\n" + "1 8 5\n"
					+ "2 0 0\n" + "3 6 0", string("") + "18");
}

TEST(typical90_problem044, case3) {
	check(
			string("") + "11 18\n" + "23 92 85 34 21 63 12 9 81 44 96\n" + "3 10 0\n" + "3 5 0\n" + "1 3 4\n"
					+ "2 0 0\n" + "1 4 11\n" + "3 11 0\n" + "1 3 5\n" + "2 0 0\n" + "2 0 0\n" + "3 9 0\n" + "2 0 0\n"
					+ "3 6 0\n" + "3 10 0\n" + "1 6 11\n" + "2 0 0\n" + "3 10 0\n" + "3 4 0\n" + "3 5 0",
			string("") + "44\n" + "21\n" + "34\n" + "63\n" + "85\n" + "63\n" + "21\n" + "34\n" + "96");
}
