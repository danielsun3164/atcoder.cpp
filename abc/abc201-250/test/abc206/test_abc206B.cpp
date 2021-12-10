#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc206B";

TEST(abc206B, case1) {
	check(PATH + COMMAND, string("") + "12", string("") + "5");
}

TEST(abc206B, case2) {
	check(PATH + COMMAND, string("") + "100128", string("") + "447");
}
