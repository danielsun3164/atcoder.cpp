#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC061/A";
}

TEST(abc045_problemA, case1) {
	check(string("") + "3\n" + "4\n" + "2", string("") + "7");
}

TEST(abc045_problemA, case2) {
	check(string("") + "4\n" + "4\n" + "4", string("") + "16");
}
