#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc197B";

TEST(abc197B, case1) {
	check(COMMAND, string("") + "4 4 2 2\n" + "##..\n" + "...#\n" + "#.#.\n" + ".#.#", string("") + "4");
}

TEST(abc197B, case2) {
	check(COMMAND, string("") + "3 5 1 4\n" + "#....\n" + "#####\n" + "....#", string("") + "4");
}

TEST(abc197B, case3) {
	check(COMMAND, string("") + "5 5 4 2\n" + ".#..#\n" + "#.###\n" + "##...\n" + "#..#.\n" + "#.###",
			string("") + "3");
}
