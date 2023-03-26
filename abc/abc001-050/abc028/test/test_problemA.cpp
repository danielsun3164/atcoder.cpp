#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc028_problemA, case1) {
	check(PATH + COMMAND, string("") + "80", string("") + "Good");
}

TEST(abc028_problemA, case2) {
	check(PATH + COMMAND, string("") + "100", string("") + "Perfect");
}

TEST(abc028_problemA, case3) {
	check(PATH + COMMAND, string("") + "59", string("") + "Bad");
}

TEST(abc028_problemA, case4) {
	check(PATH + COMMAND, string("") + "95", string("") + "Great");
}
