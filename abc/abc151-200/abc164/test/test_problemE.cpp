#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemE";

TEST(abc164_problemE, case1) {
	check(PATH + COMMAND, string("") + "3 2 1\n" + "1 2 1 2\n" + "1 3 2 4\n" + "1 11\n" + "1 2\n" + "2 5",
			string("") + "2\n" + "14");
}

TEST(abc164_problemE, case2) {
	check(PATH + COMMAND,
			string("") + "4 4 1\n" + "1 2 1 5\n" + "1 3 4 4\n" + "2 4 2 2\n" + "3 4 1 1\n" + "3 1\n" + "3 1\n" + "5 2\n"
					+ "6 4", string("") + "5\n" + "5\n" + "7");
}

TEST(abc164_problemE, case3) {
	check(PATH + COMMAND,
			string("") + "6 5 1\n" + "1 2 1 1\n" + "1 3 2 1\n" + "2 4 5 1\n" + "3 5 11 1\n" + "1 6 50 1\n" + "1 10000\n"
					+ "1 3000\n" + "1 700\n" + "1 100\n" + "1 1\n" + "100 1",
			string("") + "1\n" + "9003\n" + "14606\n" + "16510\n" + "16576");
}

TEST(abc164_problemE, case4) {
	check(PATH + COMMAND,
			string("") + "4 6 1000000000\n" + "1 2 50 1\n" + "1 3 50 5\n" + "1 4 50 7\n" + "2 3 50 2\n" + "2 4 50 4\n"
					+ "3 4 50 3\n" + "10 2\n" + "4 4\n" + "5 5\n" + "7 7", string("") + "1\n" + "3\n" + "5");
}

TEST(abc164_problemE, case5) {
	check(PATH + COMMAND, string("") + "2 1 0\n" + "1 2 1 1\n" + "1 1000000000\n" + "1 1", string("") + "1000000001");
}
