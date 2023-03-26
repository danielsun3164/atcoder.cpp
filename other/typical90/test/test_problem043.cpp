#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem043";

TEST(typical90_problem043, case1) {
	check(PATH + COMMAND, string("") + "3 3\n" + "1 1\n" + "3 3\n" + "..#\n" + "#.#\n" + "#..", string("") + "2");
}

TEST(typical90_problem043, case2) {
	check(PATH + COMMAND, string("") + "3 3\n" + "2 1\n" + "2 3\n" + "#.#\n" + "...\n" + "#.#", string("") + "0");
}

TEST(typical90_problem043, case3) {
	check(PATH + COMMAND, string("") + "4 6\n" + "2 1\n" + "1 5\n" + "...#..\n" + ".#.##.\n" + ".#....\n" + "...##.",
			string("") + "5");
}
