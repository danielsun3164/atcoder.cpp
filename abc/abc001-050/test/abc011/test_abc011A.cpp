#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc011A";

TEST(abc011A, case1) {
	check(PATH + COMMAND, string("") + "1", string("") + "2");
}

TEST(abc011A, case2) {
	check(PATH + COMMAND, string("") + "12", string("") + "1");
}
