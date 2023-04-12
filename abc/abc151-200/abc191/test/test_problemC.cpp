#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "ABC191/C";
}

TEST(abc191_problemC, case1) {
	check(string("") + "5 5\n" + ".....\n" + ".###.\n" + ".###.\n" + ".###.\n" + ".....", string("") + "4");
}

TEST(abc191_problemC, case2) {
	check(string("") + "5 5\n" + ".....\n" + ".###.\n" + ".###.\n" + ".#.#.\n" + ".....", string("") + "8");
}
