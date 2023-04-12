#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemB";
	EXTERNAL = "ABC197/B";
}

TEST(abc197_problemB, case1) {
	check(string("") + "4 4 2 2\n" + "##..\n" + "...#\n" + "#.#.\n" + ".#.#", string("") + "4");
}

TEST(abc197_problemB, case2) {
	check(string("") + "3 5 1 4\n" + "#....\n" + "#####\n" + "....#", string("") + "4");
}

TEST(abc197_problemB, case3) {
	check(string("") + "5 5 4 2\n" + ".#..#\n" + "#.###\n" + "##...\n" + "#..#.\n" + "#.###", string("") + "3");
}
