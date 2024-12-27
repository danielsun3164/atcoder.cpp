#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC060/A";
}

TEST(abc044_problemA, case1) {
	check(string("") + "5\n" + "3\n" + "10000\n" + "9000", string("") + "48000");
}

TEST(abc044_problemA, case2) {
	check(string("") + "2\n" + "3\n" + "10000\n" + "9000", string("") + "20000");
}
