#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "4 2 4", string("") + "2");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "3\n" + "100 100 100", string("") + "6");
}

TEST(problemF, case3) {
	check(PATH + COMMAND,
			string("") + "15\n"
					+ "804289384 846930887 681692778 714636916 957747794 424238336 719885387 649760493 596516650 189641422 25202363 350490028 783368691 102520060 44897764",
			string("") + "54537651");
}