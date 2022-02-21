#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND,
			string("") + "7 8\n" + "2 2\n" + "4 5\n" + "########\n" + "#......#\n" + "#.######\n" + "#..#...#\n"
					+ "#..##..#\n" + "##.....#\n" + "########", string("") + "11");
}

TEST(problemC, case2) {
	check(PATH + COMMAND,
			string("") + "5 8\n" + "2 2\n" + "2 4\n" + "########\n" + "#.#....#\n" + "#.###..#\n" + "#......#\n"
					+ "########", string("") + "10");
}

TEST(problemC, case3) {
	check(PATH + COMMAND,
			string("") + "50 50\n" + "2 2\n" + "49 49\n" + "##################################################\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "#................................................#\n"
					+ "##################################################", string("") + "94");
}