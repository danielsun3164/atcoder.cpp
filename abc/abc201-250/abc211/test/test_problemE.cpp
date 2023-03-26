#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(abc211_problemE, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "5\n" + "#.#\n" + "...\n" + "..#", string("") + "5");
}

TEST(abc211_problemE, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "2\n" + "#.\n" + ".#", string("") + "0");
}

TEST(abc211_problemE, case3) {
	check(PATH + COMMAND,
			string("") + "8\n" + "8\n" + "........\n" + "........\n" + "........\n" + "........\n" + "........\n"
					+ "........\n" + "........\n" + "........", string("") + "64678");
}
