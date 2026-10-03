#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "ARC073/C";
}

TEST(abc060_problemC, case1) {
	check(string("") + "2 4\n" + "0 3", string("") + "7");
}

TEST(abc060_problemC, case2) {
	check(string("") + "2 4\n" + "0 5", string("8"));
}

TEST(abc060_problemC, case3) {
	check(string("") + "4 1000000000\n" + "0 1000 1000000 1000000000", string("") + "2000000000");
}

TEST(abc060_problemC, case4) {
	check(string("") + "1 1\n" + "0", string("") + "1");
}

TEST(abc060_problemC, case5) {
	check(string("") + "9 10\n" + "0 3 5 7 100 110 200 300 311", string("") + "67");
}
