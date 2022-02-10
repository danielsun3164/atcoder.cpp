#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc011B";

TEST(abc011B, case1) {
	check(PATH + COMMAND, string("") + "taKahAshI", string("") + "Takahashi");
}

TEST(abc011B, case2) {
	check(PATH + COMMAND, string("") + "A", string("") + "A");
}
