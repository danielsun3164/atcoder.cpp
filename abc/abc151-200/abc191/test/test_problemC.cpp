#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(abc191_problemC, case1) {
	check(PATH + COMMAND, string("") + "5 5\n" + ".....\n" + ".###.\n" + ".###.\n" + ".###.\n" + ".....", string("") + "4");
}

TEST(abc191_problemC, case2) {
	check(PATH + COMMAND, string("") + "5 5\n" + ".....\n" + ".###.\n" + ".###.\n" + ".#.#.\n" + ".....", string("") + "8");
}
