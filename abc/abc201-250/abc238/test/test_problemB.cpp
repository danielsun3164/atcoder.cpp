#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "abc238/B";
}

TEST(abc238_problemB, case1) {
	check(string("") + "4\n" + "90 180 45 195", string("") + "120");
}

TEST(abc238_problemB, case2) {
	check(string("") + "1\n" + "1", string("") + "359");
}

TEST(abc238_problemB, case3) {
	check(string("") + "10\n" + "215 137 320 339 341 41 44 18 241 149", string("") + "170");
}
