#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(abc031_problemB, case1) {
	check(PATH + COMMAND, string("") + "300 400\n" + "3\n" + "240\n" + "350\n" + "480",
			string("") + "60\n" + "0\n" + "-1");
}

TEST(abc031_problemB, case2) {
	check(PATH + COMMAND, string("") + "50 80\n" + "5\n" + "10000\n" + "50\n" + "81\n" + "80\n" + "0",
			string("") + "-1\n" + "0\n" + "-1\n" + "0\n" + "50");
}
