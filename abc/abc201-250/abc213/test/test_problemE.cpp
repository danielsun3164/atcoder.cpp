#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "5 5\n" + "..#..\n" + "#.#.#\n" + "##.##\n" + "#.#.#\n" + "..#..",
			string("") + "1");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "5 7\n" + ".......\n" + "######.\n" + ".......\n" + ".######\n" + ".......",
			string("") + "0");
}

TEST(problemE, case3) {
	check(PATH + COMMAND,
			string("") + "8 8\n" + ".#######\n" + "########\n" + "########\n" + "########\n" + "########\n"
					+ "########\n" + "########\n" + "#######.", string("") + "5");
}
