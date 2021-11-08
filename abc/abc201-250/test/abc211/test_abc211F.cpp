#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "./abc211F";

TEST(abc211F, case1) {
	check(COMMAND,
			string("") + "3\n" + "4\n" + "1 2 1 4 3 4 3 2\n" + "4\n" + "2 5 2 3 5 3 5 5\n" + "4\n" + "5 6 5 5 3 5 3 6\n"
					+ "3\n" + "1 4\n" + "2 3\n" + "4 5", string("") + "0\n" + "2\n" + "1");
}

TEST(abc211F, case2) {
	check(COMMAND,
			string("") + "2\n" + "4\n" + "12 3 12 5 0 5 0 3\n" + "12\n"
					+ "1 1 1 9 10 9 10 0 4 0 4 6 6 6 6 2 8 2 8 7 2 7 2 1\n" + "4\n" + "2 6\n" + "4 4\n" + "6 3\n"
					+ "1 8", string("") + "0\n" + "2\n" + "1\n" + "1");
}
