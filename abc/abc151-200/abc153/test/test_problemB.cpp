#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC153/B";
}

TEST(abc153_problemB, case1) {
	check(string("") + "10 3\n" + "4 5 6", string("") + "Yes");
}

TEST(abc153_problemB, case2) {
	check(string("") + "20 3\n" + "4 5 6", string("") + "No");
}

TEST(abc153_problemB, case3) {
	check(string("") + "210 5\n" + "31 41 59 26 53", string("") + "Yes");
}

TEST(abc153_problemB, case4) {
	check(string("") + "211 5\n" + "31 41 59 26 53", string("") + "No");
}
