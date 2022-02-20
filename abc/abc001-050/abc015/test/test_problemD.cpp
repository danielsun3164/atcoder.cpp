#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "10\n" + "3 2\n" + "4 20\n" + "3 40\n" + "6 100", string("") + "140");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "10\n" + "5 4\n" + "9 10\n" + "3 7\n" + "3 1\n" + "2 6\n" + "4 5",
			string("") + "18");
}

TEST(problemD, case3) {
	check(PATH + COMMAND, string("") + "22\n" + "5 3\n" + "5 40\n" + "8 50\n" + "3 60\n" + "4 70\n" + "6 80",
			string("") + "210");
}
