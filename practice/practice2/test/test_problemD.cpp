#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(practice2_problemD, case1) {
	check(PATH + COMMAND, string("") + "3 3\n" + "#..\n" + "..#\n" + "...",
			string("") + "3\n" + "#><\n" + "vv#\n" + "^^.", string("") + "3\n" + "#><\n" + "v.#\n" + "^><",
			string("") + "3\n" + "#><\n" + "><#\n" + "><.");
}
