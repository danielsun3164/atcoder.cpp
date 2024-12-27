#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem043";
	EXTERNAL = "typical90/043";
}

TEST(typical90_problem043, case1) {
	check(string("") + "3 3\n" + "1 1\n" + "3 3\n" + "..#\n" + "#.#\n" + "#..", string("") + "2");
}

TEST(typical90_problem043, case2) {
	check(string("") + "3 3\n" + "2 1\n" + "2 3\n" + "#.#\n" + "...\n" + "#.#", string("") + "0");
}

TEST(typical90_problem043, case3) {
	check(
		string("") + "4 6\n" + "2 1\n" + "1 5\n" + "...#..\n" + ".#.##.\n" + ".#....\n" + "...##.",
		string("") + "5");
}
