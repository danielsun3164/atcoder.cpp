#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problem046";
}

TEST(math_and_algorithm_problem046, case1) {
	check(string("") + "7 8\n" + "2 2\n" + "4 5\n" + "########\n" + "#......#\n" + "#.######\n" +
			  "#..#...#\n" + "#..##..#\n" + "##.....#\n" + "########",
		  string("") + "11");
}

TEST(math_and_algorithm_problem046, case2) {
	check(string("") + "5 8\n" + "2 2\n" + "2 4\n" + "########\n" + "#.#....#\n" + "#.###..#\n" +
			  "#......#\n" + "########",
		  string("") + "10");
}

TEST(math_and_algorithm_problem046, case3) {
	check(string("") + "50 50\n" + "2 2\n" + "49 49\n" +
			  "##################################################\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "#................................................#\n" +
			  "##################################################",
		  string("") + "94");
}
