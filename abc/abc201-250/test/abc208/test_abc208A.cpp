#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>
using namespace std;

static const string COMMAND = "abc208A";

TEST(abc208A, case1) {
	check(PATH + COMMAND, string("") + "2 11", string("") + "Yes");
}

TEST(abc208A, case2) {
	check(PATH + COMMAND, string("") + "2 13", string("") + "No");
}

TEST(abc208A, case3) {
	check(PATH + COMMAND, string("") + "100 600", string("") + "Yes");
}
