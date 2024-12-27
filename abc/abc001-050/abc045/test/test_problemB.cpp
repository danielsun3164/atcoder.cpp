#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemB";
	EXTERNAL = "ARC061/B";
}

TEST(abc045_problemB, case1) {
	check(string("") + "aca\n" + "accc\n" + "ca", string("") + "A");
}

TEST(abc045_problemB, case2) {
	check(string("") + "abcb\n" + "aacb\n" + "bccc", string("") + "C");
}
