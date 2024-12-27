#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ABC152/C";
}

TEST(abc152_problemC, case1) {
	check(string("") + "5\n" + "4 2 5 1 3", string("") + "3");
}

TEST(abc152_problemC, case2) {
	check(string("") + "4\n" + "4 3 2 1", string("") + "4");
}

TEST(abc152_problemC, case3) {
	check(string("") + "6\n" + "1 2 3 4 5 6", string("") + "1");
}

TEST(abc152_problemC, case4) {
	check(string("") + "8\n" + "5 7 4 2 6 8 1 3", string("") + "4");
}

TEST(abc152_problemC, case5) {
	check(string("") + "1\n" + "1", string("") + "1");
}
