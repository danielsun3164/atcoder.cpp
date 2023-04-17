#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static_block
{
	COMMAND = "problemC";
	EXTERNAL = "abc218/C";
}

TEST(abc218_problemC, case1) {
	check(
			string("") + "5\n" + ".....\n" + "..#..\n" + ".###.\n" + ".....\n" + ".....\n" + ".....\n" + ".....\n"
					+ "....#\n" + "...##\n" + "....#", string("") + "Yes");
}

TEST(abc218_problemC, case2) {
	check(
			string("") + "5\n" + "#####\n" + "##..#\n" + "#..##\n" + "#####\n" + ".....\n" + "#####\n" + "#..##\n"
					+ "##..#\n" + "#####\n" + ".....", string("") + "No");
}

TEST(abc218_problemC, case3) {
	check(string("") + "4\n" + "#...\n" + "..#.\n" + "..#.\n" + "....\n" + "#...\n" + "#...\n" + "..#.\n" + "....",
			string("") + "Yes");
}

TEST(abc218_problemC, case4) {
	check(string("") + "4\n" + "#...\n" + ".##.\n" + "..#.\n" + "....\n" + "##..\n" + "#...\n" + "..#.\n" + "....",
			string("") + "No");
}
