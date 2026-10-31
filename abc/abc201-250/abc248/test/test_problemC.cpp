#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc248/C";
}

TEST(abc248_problemC, case1) {
	check(string("") + "2 3 4", string("") + "6");
}

TEST(abc248_problemC, case2) {
	check(string("") + "31 41 592", string("") + "798416518");
}
