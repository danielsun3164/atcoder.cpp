#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problem081";

TEST(typical90_problem081, case1) {
	check(PATH + COMMAND, string("") + "3 4\n" + "1 1\n" + "2 5\n" + "7 4", string("") + "2");
}

TEST(typical90_problem081, case2) {
	check(PATH + COMMAND, string("") + "2 123\n" + "4 5\n" + "678 901", string("") + "1");
}

TEST(typical90_problem081, case3) {
	check(PATH + COMMAND,
			string("") + "7 10\n" + "20 20\n" + "20 20\n" + "20 30\n" + "20 40\n" + "30 20\n" + "30 30\n" + "40 20",
			string("") + "5");
}
