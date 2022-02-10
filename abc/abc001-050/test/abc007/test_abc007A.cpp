#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "abc007A";

TEST(abc007A, case1) {
	check(PATH + COMMAND, string("") + "4", string("") + "3");
}

TEST(abc007A, case2) {
	check(PATH + COMMAND, string("") + "100", string("") + "99");
}

TEST(abc007A, case3) {
	check(PATH + COMMAND, string("") + "1", string("") + "0");
}
