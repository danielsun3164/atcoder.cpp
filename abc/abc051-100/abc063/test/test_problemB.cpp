#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC075/B";
}

TEST(abc063_problemB, case1) {
	check(string("") + "uncopyrightable", string("") + "yes");
}

TEST(abc063_problemB, case2) {
	check(string("") + "different", string("") + "no");
}

TEST(abc063_problemB, case3) {
	check(string("") + "no", string("") + "yes");
}
