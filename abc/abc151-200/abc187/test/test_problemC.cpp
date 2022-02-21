#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "6\n" + "a\n" + "!a\n" + "b\n" + "!c\n" + "d\n" + "!d", string("") + "a",
			string("") + "d");
}

TEST(problemC, case2) {
	check(PATH + COMMAND,
			string("") + "10\n" + "red\n" + "red\n" + "red\n" + "!orange\n" + "yellow\n" + "!blue\n" + "cyan\n"
					+ "!green\n" + "brown\n" + "!gray", string("") + "satisfiable");
}