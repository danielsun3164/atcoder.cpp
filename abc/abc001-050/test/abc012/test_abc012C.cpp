#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc012C";

TEST(abc012C, case1) {
	check(PATH + COMMAND, string("") + "2013", string("") + "2 x 6\n" + "3 x 4\n" + "4 x 3\n" + "6 x 2");
}

TEST(abc012C, case2) {
	check(PATH + COMMAND, string("") + "2024", string("") + "1 x 1");
}
