#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc004_problemB, case1) {
	check(PATH + COMMAND, string("") + ". . . .\n" + ". o o .\n" + ". x x .\n" + ". . . .",
			string("") + ". . . .\n" + ". x x .\n" + ". o o .\n" + ". . . .");
}

TEST(abc004_problemB, case2) {
	check(PATH + COMMAND, string("") + "o o x x\n" + "o o x x\n" + "x x o o\n" + "x x o o",
			string("") + "o o x x\n" + "o o x x\n" + "x x o o\n" + "x x o o");
}
