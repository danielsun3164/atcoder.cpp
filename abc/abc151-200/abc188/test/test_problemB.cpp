#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ABC188/B";
}

TEST(abc188_problemB, case1) {
	check(string("") + "2\n" + "-3 6\n" + "4 2", string("") + "Yes");
}

TEST(abc188_problemB, case2) {
	check(string("") + "2\n" + "4 5\n" + "-1 -3", string("") + "No");
}

TEST(abc188_problemB, case3) {
	check(string("") + "3\n" + "1 3 5\n" + "3 -6 3", string("") + "Yes");
}
