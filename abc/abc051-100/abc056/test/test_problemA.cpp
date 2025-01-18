#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ARC070/A";
}

TEST(abc056_problemA, case1) {
	check(string("") + "H H", string("") + "H");
}

TEST(abc056_problemA, case2) {
	check(string("") + "D H", string("") + "D");
}

TEST(abc056_problemA, case3) {
	check(string("") + "D D", string("") + "H");
}
