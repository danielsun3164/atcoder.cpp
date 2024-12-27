#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "abc232/D";
}

TEST(abc232_problemD, case1) {
	check(string("") + "3 4\n" + ".#..\n" + "..#.\n" + "..##", string("") + "4");
}

TEST(abc232_problemD, case2) {
	check(string("") + "1 1\n" + ".", string("") + "1");
}

TEST(abc232_problemD, case3) {
	check(string("") + "5 5\n" + ".....\n" + ".....\n" + ".....\n" + ".....\n" + ".....",
		  string("") + "9");
}
