#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc157_problemB, case1) {
	check(PATH + COMMAND,
			string("") + "84 97 66\n" + "79 89 11\n" + "61 59 7\n" + "7\n" + "89\n" + "7\n" + "87\n" + "79\n" + "24\n"
					+ "84\n" + "30", string("") + "Yes");
}

TEST(abc157_problemB, case2) {
	check(PATH + COMMAND,
			string("") + "41 7 46\n" + "26 89 2\n" + "78 92 8\n" + "5\n" + "6\n" + "45\n" + "16\n" + "57\n" + "17",
			string("") + "No");
}

TEST(abc157_problemB, case3) {
	check(PATH + COMMAND,
			string("") + "60 88 34\n" + "92 41 43\n" + "65 73 48\n" + "10\n" + "60\n" + "43\n" + "88\n" + "11\n"
					+ "48\n" + "73\n" + "65\n" + "41\n" + "92\n" + "34", string("") + "Yes");
}
