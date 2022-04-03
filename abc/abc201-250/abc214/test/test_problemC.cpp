#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemC";

TEST(problemC, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "4 1 5\n" + "3 10 100", string("") + "3\n" + "7\n" + "8");
}

TEST(problemC, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "100 100 100 100\n" + "1 1 1 1",
			string("") + "1\n" + "1\n" + "1\n" + "1");
}

TEST(problemC, case3) {
	check(PATH + COMMAND, string("") + "4\n" + "1 2 3 4\n" + "1 2 4 7", string("") + "1\n" + "2\n" + "4\n" + "7");
}

TEST(problemC, case4) {
	check(PATH + COMMAND, string("") + "8\n" + "84 87 78 16 94 36 87 93\n" + "50 22 63 28 91 60 64 27",
			string("") + "50\n" + "22\n" + "63\n" + "28\n" + "44\n" + "60\n" + "64\n" + "27");
}
