#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC062/B";
}

TEST(abc046_problemB, case1) {
	check(string("") + "2 2", string("") + "2");
}

TEST(abc046_problemB, case2) {
	check(string("") + "1 10", string("") + "10");
}

TEST(abc046_problemB, case3) {
	check(string("") + "10 8", string("") + "322828856");
}
