#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
}

TEST(abc019_problemC, case1) {
	check(string("") + "3\n" + "1 2 3", string("") + "2");
}

TEST(abc019_problemC, case2) {
	check(string("") + "4\n" + "2 4 8 16", string("") + "1");
}

TEST(abc019_problemC, case3) {
	check(string("") + "4\n" + "2 3 5 7", string("") + "4");
}
