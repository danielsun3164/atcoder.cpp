#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc230/C";
}

TEST(abc230_problemC, case1) {
	check(string("") + "5 3 2\n" + "1 5 1 5",
		  string("") + "...#.\n" + "#.#..\n" + ".#...\n" + "#.#..\n" + "...#.");
}

TEST(abc230_problemC, case2) {
	check(string("") + "5 3 3\n" + "4 5 2 5", string("") + "#.#.\n" + "...#");
}

TEST(abc230_problemC, case3) {
	check(string("") + "1000000000000000000 999999999999999999 999999999999999999\n" +
			  "999999999999999998 1000000000000000000 999999999999999998 1000000000000000000",
		  string("") + "#.#\n" + ".#.\n" + "#.#");
}
