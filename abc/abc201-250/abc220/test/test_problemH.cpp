#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemH";
	EXTERNAL = "abc220/H";
}

TEST(abc220_problemH, case1) {
	check(string("") + "3 2\n" + "1 2\n" + "2 3", string("") + "6");
}

TEST(abc220_problemH, case2) {
	check(string("") + "20 3\n" + "5 6\n" + "3 4\n" + "1 2", string("") + "458752");
}
