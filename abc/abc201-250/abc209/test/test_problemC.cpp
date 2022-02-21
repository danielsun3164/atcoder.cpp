#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "1 3", string("") + "2");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "3 3 4 4", string("") + "12");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "2\n" + "1 1", string("") + "0");
}

TEST(problemC, case4) {
	check(PATH + COMMAND,
			string("") + "10\n"
					+ "999999917 999999914 999999923 999999985 999999907 999999965 999999914 999999908 999999951 999999979",
			string("") + "405924645");
}