#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./problemD";

TEST(problemD, case1) {
	check(COMMAND, string("") + "7\n" + "1 3\n" + "3 4\n" + "1 4\n" + "2 7\n" + "5 7\n" + "6 7\n" + "1 7",
			string("") + "5");
}

TEST(problemD, case2) {
	check(COMMAND, string("") + "6\n" + "1 2\n" + "2 3\n" + "3 4\n" + "4 5\n" + "1 5\n" + "2 6", string("") + "6");
}

TEST(problemD, case3) {
	check(COMMAND, string("") + "7\n" + "1 3\n" + "2 4\n" + "3 5\n" + "4 6\n" + "6 7\n" + "2 6\n" + "4 7",
			string("") + "4");
}
