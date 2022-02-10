#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc207F";

TEST(abc207F, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1 3\n" + "1 2", string("") + "1\n" + "0\n" + "2\n" + "5");
}

TEST(abc207F, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "1 3\n" + "4 5\n" + "1 5\n" + "2 3",
			string("") + "1\n" + "0\n" + "2\n" + "5\n" + "7\n" + "17");
}

TEST(abc207F, case3) {
	check(PATH + COMMAND,
			string("") + "10\n" + "6 10\n" + "1 8\n" + "2 7\n" + "5 6\n" + "3 8\n" + "3 4\n" + "7 10\n" + "4 9\n"
					+ "2 8",
			string("") + "1\n" + "0\n" + "3\n" + "8\n" + "15\n" + "32\n" + "68\n" + "110\n" + "196\n" + "266\n"
					+ "325");
}
