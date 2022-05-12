#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemA";

TEST(abc189_problemA, case1) {
	check(PATH + COMMAND, string("") + "SSS", string("") + "Won");
}

TEST(abc189_problemA, case2) {
	check(PATH + COMMAND, string("") + "WVW", string("") + "Lost");
}
