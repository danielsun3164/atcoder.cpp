#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemE";
}

TEST(abc213_problemE, case1) {
	check(string("") + "5 5\n" + "..#..\n" + "#.#.#\n" + "##.##\n" + "#.#.#\n" + "..#..", string("") + "1");
}

TEST(abc213_problemE, case2) {
	check(string("") + "5 7\n" + ".......\n" + "######.\n" + ".......\n" + ".######\n" + ".......", string("") + "0");
}

TEST(abc213_problemE, case3) {
	check(
			string("") + "8 8\n" + ".#######\n" + "########\n" + "########\n" + "########\n" + "########\n"
					+ "########\n" + "########\n" + "#######.", string("") + "5");
}
