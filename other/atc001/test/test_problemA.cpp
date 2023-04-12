#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemA";
}

TEST(atc001_problemA, case1) {
	check(string("") + "4 5\n" + "s####\n" + "....#\n" + "#####\n" + "#...g", string("") + "No");
}

TEST(atc001_problemA, case2) {
	check(string("") + "4 4\n" + "...s\n" + "....\n" + "....\n" + ".g..", string("") + "Yes");
}

TEST(atc001_problemA, case3) {
	check(
			string("") + "10 10\n" + "s.........\n" + "#########.\n" + "#.......#.\n" + "#..####.#.\n" + "##....#.#.\n"
					+ "#####.#.#.\n" + "g.#.#.#.#.\n" + "#.#.#.#.#.\n" + "###.#.#.#.\n" + "#.....#...",
			string("") + "No");
}

TEST(atc001_problemA, case4) {
	check(
			string("") + "10 10\n" + "s.........\n" + "#########.\n" + "#.......#.\n" + "#..####.#.\n" + "##....#.#.\n"
					+ "#####.#.#.\n" + "g.#.#.#.#.\n" + "#.#.#.#.#.\n" + "#.#.#.#.#.\n" + "#.....#...",
			string("") + "Yes");
}

TEST(atc001_problemA, case5) {
	check(string("") + "1 10\n" + "s..####..g", string("") + "No");
}
