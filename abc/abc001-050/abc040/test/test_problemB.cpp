#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
}

TEST(abc040_problemB, case1) {
	check(string("") + "26", string("") + "1");
}

TEST(abc040_problemB, case2) {
	check(string("") + "41", string("") + "4");
}

TEST(abc040_problemB, case3) {
	check(string("") + "100000", string("") + "37");
}
