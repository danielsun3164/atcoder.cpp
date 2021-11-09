#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc151D";

TEST(abc151D, case1) {
	check(COMMAND, string("") + "3 3\n" + "...\n" + "...\n" + "...", string("") + "4");
}

TEST(abc151D, case2) {
	check(COMMAND, string("") + "3 5\n" + "...#.\n" + ".#.#.\n" + ".#...", string("") + "10");
}
