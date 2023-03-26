#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem068";

TEST(typical90_problem068, case1) {
	check(PATH + COMMAND,
			string("") + "4\n" + "7\n" + "0 1 2 3\n" + "1 1 2 1\n" + "1 3 4 5\n" + "0 3 4 6\n" + "1 3 4 5\n"
					+ "0 2 3 6\n" + "1 3 1 5", string("") + "2\n" + "Ambiguous\n" + "1\n" + "2");
}

TEST(typical90_problem068, case2) {
	check(PATH + COMMAND,
			string("") + "15\n" + "25\n" + "0 11 12 41\n" + "0 1 2 159\n" + "0 14 15 121\n" + "0 4 5 245\n"
					+ "0 12 13 157\n" + "0 9 10 176\n" + "0 6 7 170\n" + "0 2 3 123\n" + "0 7 8 167\n" + "0 3 4 159\n"
					+ "1 12 11 33\n" + "0 10 11 116\n" + "0 8 9 161\n" + "1 9 12 68\n" + "1 12 12 33\n" + "1 7 12 74\n"
					+ "0 5 6 290\n" + "1 8 9 93\n" + "0 13 14 127\n" + "1 10 12 108\n" + "1 14 1 3\n" + "1 13 8 124\n"
					+ "1 12 11 33\n" + "1 12 10 33\n" + "1 5 15 194",
			string("") + "8\n" + "33\n" + "33\n" + "33\n" + "68\n" + "33\n" + "144\n" + "93\n" + "8\n" + "108\n"
					+ "118");
}
