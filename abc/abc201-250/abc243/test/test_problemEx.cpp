#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemEx";
	EXTERNAL = "abc243/Ex";
}

TEST(abc243_problemEx, case1) {
	check(string("") + "4 3\n" + "S..\n" + "O..\n" + "..O\n" + "..G", string("") + "Yes\n" + "3 6");
}

TEST(abc243_problemEx, case2) {
	check(string("") + "3 2\n" + ".G\n" + ".O\n" + ".S", string("") + "No");
}

TEST(abc243_problemEx, case3) {
	check(string("") + "2 2\n" + "S.\n" + ".G", string("") + "Yes\n" + "2 1");
}

TEST(abc243_problemEx, case4) {
	check(string("") + "10 10\n" + "OOO...OOO.\n" + ".....OOO.O\n" + "OOO.OO.OOO\n" +
			  "OOO..O..S.\n" + "....O.O.O.\n" + ".OO.O.OOOO\n" + "..OOOG.O.O\n" + ".O.O..OOOO\n" +
			  ".O.O.OO...\n" + "...O..O..O",
		  string("") + "Yes\n" + "10 12");
}
