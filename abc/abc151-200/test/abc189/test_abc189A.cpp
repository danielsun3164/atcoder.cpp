#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "./abc189A";

TEST(abc189A, case1) {
	check(COMMAND, string("") + "SSS", string("") + "Won");
}

TEST(abc189A, case2) {
	check(COMMAND, string("") + "WVW", string("") + "Lost");
}
