#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemB";

TEST(abc197_problemB, case1) {
	check(PATH + COMMAND, string("") + "4 4 2 2\n" + "##..\n" + "...#\n" + "#.#.\n" + ".#.#", string("") + "4");
}

TEST(abc197_problemB, case2) {
	check(PATH + COMMAND, string("") + "3 5 1 4\n" + "#....\n" + "#####\n" + "....#", string("") + "4");
}

TEST(abc197_problemB, case3) {
	check(PATH + COMMAND, string("") + "5 5 4 2\n" + ".#..#\n" + "#.###\n" + "##...\n" + "#..#.\n" + "#.###",
			string("") + "3");
}
