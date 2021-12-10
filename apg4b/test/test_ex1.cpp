#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "ex1";

TEST(ex1, case1) {
	check(PATH + COMMAND, string(""), string("") + "こんにちは\n" + "AtCoder");
}
