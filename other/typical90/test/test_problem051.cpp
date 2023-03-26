#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem051";

TEST(typical90_problem051, case1) {
	check(PATH + COMMAND, string("") + "5 2 10\n" + "3 8 7 5 11", string("") + "2");
}

TEST(typical90_problem051, case2) {
	check(PATH + COMMAND, string("") + "5 1 10\n" + "7 7 7 7 7", string("") + "5");
}

TEST(typical90_problem051, case3) {
	check(PATH + COMMAND,
			string("") + "40 20 100\n"
					+ "1 3 1 3 4 1 3 5 5 3 3 4 1 5 4 4 3 1 3 4 1 3 2 4 4 1 5 2 5 3 1 3 3 3 5 5 5 2 3 5",
			string("") + "137846528820");
}
