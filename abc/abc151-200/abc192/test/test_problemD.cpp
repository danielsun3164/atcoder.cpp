#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemD";

TEST(problemD, case1) {
	check(PATH + COMMAND, string("") + "22\n" + "10", string("") + "2");
}

TEST(problemD, case2) {
	check(PATH + COMMAND, string("") + "999\n" + "1500", string("") + "3");
}

TEST(problemD, case3) {
	check(PATH + COMMAND,
			string("") + "100000000000000000000000000000000000000000000000000000000000\n" + "1000000000000000000",
			string("") + "1");
}

TEST(problemD, case4) {
	check(PATH + COMMAND, string("") + "2\n" + "8", string("") + "1");
}

TEST(problemD, case5) {
	check(PATH + COMMAND, string("") + "2\n" + "1", string("") + "0");
}
