#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "4 5\n" + "s####\n" + "....#\n" + "#####\n" + "#...g", string("") + "No");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "4 4\n" + "...s\n" + "....\n" + "....\n" + ".g..", string("") + "Yes");
}

TEST(problemA, case3) {
	check(PATH + COMMAND,
			string("") + "10 10\n" + "s.........\n" + "#########.\n" + "#.......#.\n" + "#..####.#.\n" + "##....#.#.\n"
					+ "#####.#.#.\n" + "g.#.#.#.#.\n" + "#.#.#.#.#.\n" + "###.#.#.#.\n" + "#.....#...",
			string("") + "No");
}

TEST(problemA, case4) {
	check(PATH + COMMAND,
			string("") + "10 10\n" + "s.........\n" + "#########.\n" + "#.......#.\n" + "#..####.#.\n" + "##....#.#.\n"
					+ "#####.#.#.\n" + "g.#.#.#.#.\n" + "#.#.#.#.#.\n" + "#.#.#.#.#.\n" + "#.....#...",
			string("") + "Yes");
}

TEST(problemA, case5) {
	check(PATH + COMMAND, string("") + "1 10\n" + "s..####..g", string("") + "No");
}
