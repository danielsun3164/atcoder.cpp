#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc157C";

TEST(abc157C, case1) {
	check(PATH + COMMAND, string("") + "3 3\n" + "1 7\n" + "3 2\n" + "1 7", string("") + "702");
}

TEST(abc157C, case2) {
	check(PATH + COMMAND, string("") + "3 2\n" + "2 1\n" + "2 3", string("") + "-1");
}

TEST(abc157C, case3) {
	check(PATH + COMMAND, string("") + "3 1\n" + "1 0", string("") + "-1");
}
