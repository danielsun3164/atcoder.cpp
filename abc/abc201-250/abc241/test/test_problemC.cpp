#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc241/C";
}

TEST(abc241_problemC, case1) {
	check(string("") + "8\n" + "........\n" + "........\n" + ".#.##.#.\n" + "........\n" +
			  "........\n" + "........\n" + "........\n" + "........",
		  string("") + "Yes");
}

TEST(abc241_problemC, case2) {
	check(string("") + "6\n" + "######\n" + "######\n" + "######\n" + "######\n" + "######\n" +
			  "######",
		  string("") + "Yes");
}

TEST(abc241_problemC, case3) {
	check(string("") + "10\n" + "..........\n" + "#..##.....\n" + "..........\n" + "..........\n" +
			  "....#.....\n" + "....#.....\n" + ".#...#..#.\n" + "..........\n" + "..........\n" +
			  "..........",
		  string("") + "No");
}
