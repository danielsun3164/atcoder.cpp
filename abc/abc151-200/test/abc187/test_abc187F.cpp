#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc187F";

TEST(abc187F, case1) {
	check(PATH + COMMAND, string("") + "3 2\n" + "1 2\n" + "1 3", string("") + "2");
}

TEST(abc187F, case2) {
	check(PATH + COMMAND, string("") + "4 6\n" + "1 2\n" + "1 3\n" + "1 4\n" + "2 3\n" + "2 4\n" + "3 4", string("") + "1");
}

TEST(abc187F, case3) {
	check(PATH + COMMAND,
			string("") + "10 11\n" + "9 10\n" + "2 10\n" + "8 9\n" + "3 4\n" + "5 8\n" + "1 8\n" + "5 6\n" + "2 5\n"
					+ "3 6\n" + "6 9\n" + "1 9", string("") + "5");
}

TEST(abc187F, case4) {
	check(PATH + COMMAND, string("") + "18 0", string("") + "18");
}
