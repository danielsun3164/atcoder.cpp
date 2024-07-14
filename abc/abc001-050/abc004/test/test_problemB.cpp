#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc004_problemB, case1) {
	check(string("") + ". . . .\n" + ". o o .\n" + ". x x .\n" + ". . . .",
		  string("") + ". . . .\n" + ". x x .\n" + ". o o .\n" + ". . . .");
}

TEST(abc004_problemB, case2) {
	check(string("") + "o o x x\n" + "o o x x\n" + "x x o o\n" + "x x o o",
		  string("") + "o o x x\n" + "o o x x\n" + "x x o o\n" + "x x o o");
}
