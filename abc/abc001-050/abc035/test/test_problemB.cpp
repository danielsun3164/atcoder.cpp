#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc035_problemB, case1) {
	check(string("") + "UL?\n" + "1", string("") + "3");
}

TEST(abc035_problemB, case2) {
	check(string("") + "UD?\n" + "1", string("") + "1");
}

TEST(abc035_problemB, case3) {
	check(string("") + "UUUU?DDR?LLLL\n" + "1", string("") + "7");
}

TEST(abc035_problemB, case4) {
	check(string("") + "UULL?\n" + "2", string("") + "3");
}
