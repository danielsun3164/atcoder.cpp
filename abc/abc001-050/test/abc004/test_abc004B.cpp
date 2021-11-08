#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc004B";

TEST(abc004B, case1) {
	check(COMMAND, string("") + ". . . .\n" + ". o o .\n" + ". x x .\n" + ". . . .",
			string("") + ". . . .\n" + ". x x .\n" + ". o o .\n" + ". . . .");
}

TEST(abc004B, case2) {
	check(COMMAND, string("") + "o o x x\n" + "o o x x\n" + "x x o o\n" + "x x o o",
			string("") + "o o x x\n" + "o o x x\n" + "x x o o\n" + "x x o o");
}
