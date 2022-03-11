#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "5 10\n" + "20\n" + "100\n" + "105\n" + "217\n" + "314", string("") + "45");
}

TEST(problemB, case2) {
	check(PATH + COMMAND,
			string("") + "10 10\n" + "1\n" + "2\n" + "3\n" + "4\n" + "5\n" + "6\n" + "7\n" + "8\n" + "9\n" + "10",
			string("") + "19");
}

TEST(problemB, case3) {
	check(PATH + COMMAND,
			string("") + "10 100000\n" + "3\n" + "31\n" + "314\n" + "3141\n" + "31415\n" + "314159\n" + "400000\n"
					+ "410000\n" + "500000\n" + "777777", string("") + "517253");
}
