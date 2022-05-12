#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(abc151_problemD, case1) {
	check(PATH + COMMAND, string("") + "3 3\n" + "...\n" + "...\n" + "...", string("") + "4");
}

TEST(abc151_problemD, case2) {
	check(PATH + COMMAND, string("") + "3 5\n" + "...#.\n" + ".#.#.\n" + ".#...", string("") + "10");
}
