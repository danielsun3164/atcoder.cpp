#include <bits/stdc++.h>
#include <gtest/gtest.h>
#include <command.h>

using namespace std;

static const string COMMAND = "problemB";

TEST(joi2008yo_problemB, case1) {
	check(PATH + COMMAND, string("") + "JOIJOI", string("") + "2\n" + "0");
}

TEST(joi2008yo_problemB, case2) {
	check(PATH + COMMAND, string("") + "JOIOIOIOI", string("") + "1\n" + "3");
}

TEST(joi2008yo_problemB, case3) {
	check(PATH + COMMAND, string("") + "JOIOIJOINXNXJIOIOIOJ", string("") + "2\n" + "3");
}
