#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc164_problemA, case1) {
	check(PATH + COMMAND, string("") + "4 5", string("") + "unsafe");
}

TEST(abc164_problemA, case2) {
	check(PATH + COMMAND, string("") + "100 2", string("") + "safe");
}

TEST(abc164_problemA, case3) {
	check(PATH + COMMAND, string("") + "10 10", string("") + "unsafe");
}
