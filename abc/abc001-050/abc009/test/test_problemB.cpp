#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "4\n" + "100\n" + "200\n" + "300\n" + "300", string("") + "200");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "5\n" + "50\n" + "370\n" + "819\n" + "433\n" + "120", string("") + "433");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "6\n" + "100\n" + "100\n" + "100\n" + "200\n" + "200\n" + "200",
			string("") + "100");
}