#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(abc164_problemF, case1) {
	check(PATH + COMMAND, string("") + "2\n" + "0 1\n" + "1 0\n" + "1 1\n" + "1 0", string("") + "1 1\n" + "1 0");
}

TEST(abc164_problemF, case2) {
	check(PATH + COMMAND, string("") + "2\n" + "1 1\n" + "1 0\n" + "15 15\n" + "15 11",
			string("") + "15 11\n" + "15 11");
}
