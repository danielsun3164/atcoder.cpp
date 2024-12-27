#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ABC151/D";
}

TEST(abc151_problemD, case1) {
	check(string("") + "3 3\n" + "...\n" + "...\n" + "...", string("") + "4");
}

TEST(abc151_problemD, case2) {
	check(string("") + "3 5\n" + "...#.\n" + ".#.#.\n" + ".#...", string("") + "10");
}
