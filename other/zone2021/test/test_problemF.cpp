#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemF";

TEST(zone2021_problemE, case1) {
	check(PATH + COMMAND, string("") + "4 1\n" + "3", string("") + "0 1\n" + "2 3\n" + "0 2");
}

TEST(zone2021_problemE, case2) {
	check(PATH + COMMAND, string("") + "8 0\n" + "",
			string("") + "0 1\n" + "2 3\n" + "4 5\n" + "6 7\n" + "0 2\n" + "4 6\n" + "0 4");
}

TEST(zone2021_problemE, case3) {
	check(PATH + COMMAND, string("") + "8 7\n" + "1 2 3 4 5 6 7", string("") + "-1");
}
