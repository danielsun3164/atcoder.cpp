#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc209C";

TEST(abc209C, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "1 3", string("") + "2");
}

TEST(abc209C, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "3 3 4 4", string("") + "12");
}

TEST(abc209C, case3) {
	check(PATH + COMMAND, string("") + "2\n" + "1 1", string("") + "0");
}

TEST(abc209C, case4) {
	check(PATH + COMMAND,
			string("") + "10\n"
					+ "999999917 999999914 999999923 999999985 999999907 999999965 999999914 999999908 999999951 999999979",
			string("") + "405924645");
}
