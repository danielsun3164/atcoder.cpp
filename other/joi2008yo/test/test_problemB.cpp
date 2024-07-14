#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(joi2008yo_problemB, case1) {
	check(string("") + "JOIJOI", string("") + "2\n" + "0");
}

TEST(joi2008yo_problemB, case2) {
	check(string("") + "JOIOIOIOI", string("") + "1\n" + "3");
}

TEST(joi2008yo_problemB, case3) {
	check(string("") + "JOIOIJOINXNXJIOIOIOJ", string("") + "2\n" + "3");
}
