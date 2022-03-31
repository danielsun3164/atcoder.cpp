#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(problemA, case1) {
	check(PATH + COMMAND, string("") + "80", string("") + "Good");
}

TEST(problemA, case2) {
	check(PATH + COMMAND, string("") + "100", string("") + "Perfect");
}

TEST(problemA, case3) {
	check(PATH + COMMAND, string("") + "59", string("") + "Bad");
}

TEST(problemA, case4) {
	check(PATH + COMMAND, string("") + "95", string("") + "Great");
}
