#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC071/C";
}

TEST(abc058_problemC, case1) {
	check(string("") + "3\n" + "cbaa\n" + "daacc\n" + "acacac", string("") + "aac");
}

TEST(abc058_problemC, case2) {
	check(string("") + "3\n" + "a\n" + "aa\n" + "b", string(""));
}
