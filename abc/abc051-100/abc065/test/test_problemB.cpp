#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC076/B";
}

TEST(abc065_problemB, case1) {
	check(string("") + "3\n" + "3\n" + "1\n" + "2", string("") + "2");
}

TEST(abc065_problemB, case2) {
	check(string("") + "4\n" + "3\n" + "4\n" + "1\n" + "2", string("") + "-1");
}

TEST(abc065_problemB, case3) {
	check(string("") + "5\n" + "3\n" + "3\n" + "4\n" + "2\n" + "4", string("") + "3");
}
