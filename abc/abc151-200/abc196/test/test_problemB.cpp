#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(problemB, case1) {
	check(PATH + COMMAND, string("") + "5.90", string("") + "5");
}

TEST(problemB, case2) {
	check(PATH + COMMAND, string("") + "0", string("") + "0");
}

TEST(problemB, case3) {
	check(PATH + COMMAND, string("") + "84939825309432908832902189.9092309409809091329",
			string("") + "84939825309432908832902189");
}