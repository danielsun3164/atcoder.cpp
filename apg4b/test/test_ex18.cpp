#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./ex18";

TEST(ex18, case1) {
	check(COMMAND, string("") + "3 2\n" + "1 2\n" + "3 1", string("") + "- o x\n" + "x - -\n" + "o - -");
}

TEST(ex18, case2) {
	check(COMMAND,
			string("") + "7 12\n" + "1 5\n" + "5 4\n" + "6 2\n" + "1 7\n" + "2 4\n" + "6 3\n" + "1 3\n" + "6 4\n"
					+ "3 7\n" + "5 7\n" + "4 3\n" + "6 1",
			string("") + "- - o - o x o\n" + "- - - o - x -\n" + "x - - x - x o\n" + "- x o - x x -\n"
					+ "x - - o - - o\n" + "o o o o - - -\n" + "x - x - x - -");
}

TEST(ex18, case3) {
	check(COMMAND, string("") + "1 0", string("") + "-");
}
