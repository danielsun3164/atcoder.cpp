#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "problemF";

TEST(problemF, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "abb", string("") + "3\n" + "3\n" + "2");
}

TEST(problemF, case2) {
	check(PATH + COMMAND, string("") + "11\n" + "mississippi",
			string("") + "11\n" + "16\n" + "14\n" + "12\n" + "13\n" + "11\n" + "9\n" + "7\n" + "4\n" + "3\n" + "4");
}