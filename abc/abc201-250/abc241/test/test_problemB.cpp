#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc241/B";
}

TEST(abc241_problemB, case1) {
	check(string("") + "3 2\n" + "1 1 3\n" + "3 1", string("") + "Yes");
}

TEST(abc241_problemB, case2) {
	check(string("") + "1 1\n" + "1000000000\n" + "1", string("") + "No");
}

TEST(abc241_problemB, case3) {
	check(string("") + "5 2\n" + "1 2 3 4 5\n" + "5 5", string("") + "No");
}
