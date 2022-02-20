#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemE";

TEST(problemE, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "5\n" + "#.#\n" + "...\n" + "..#", string("") + "5");
}

TEST(problemE, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "2\n" + "#.\n" + ".#", string("") + "0");
}

TEST(problemE, case3) {
	check(PATH + COMMAND,
			string("") + "8\n" + "8\n" + "........\n" + "........\n" + "........\n" + "........\n" + "........\n"
					+ "........\n" + "........\n" + "........", string("") + "64678");
}
