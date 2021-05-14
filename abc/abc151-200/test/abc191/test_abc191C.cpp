#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc191C";

TEST(abc191C, case1) {
	check(COMMAND, string("") + "5 5\n" + ".....\n" + ".###.\n" + ".###.\n" + ".###.\n" + ".....", string("") + "4");
}

TEST(abc191C, case2) {
	check(COMMAND, string("") + "5 5\n" + ".....\n" + ".###.\n" + ".###.\n" + ".#.#.\n" + ".....", string("") + "8");
}
