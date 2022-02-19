#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc019C";

TEST(abc019C, case1) {
	check(PATH + COMMAND, string("") + "3\n" + "1 2 3", string("") + "2");
}

TEST(abc019C, case2) {
	check(PATH + COMMAND, string("") + "4\n" + "2 4 8 16", string("") + "1");
}

TEST(abc019C, case3) {
	check(PATH + COMMAND, string("") + "4\n" + "2 3 5 7", string("") + "4");
}
