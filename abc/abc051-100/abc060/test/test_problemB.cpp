#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC073/B";
}

TEST(abc060_problemB, case1) {
	check(string("") + "7 5 1", string("") + "YES");
}

TEST(abc060_problemB, case2) {
	check(string("") + "2 2 1", string("") + "NO");
}

TEST(abc060_problemB, case3) {
	check(string("") + "1 100 97", string("") + "YES");
}

TEST(abc060_problemB, case4) {
	check(string("") + "40 98 58", string("") + "YES");
}

TEST(abc060_problemB, case5) {
	check(string("") + "77 42 36", string("") + "NO");
}
