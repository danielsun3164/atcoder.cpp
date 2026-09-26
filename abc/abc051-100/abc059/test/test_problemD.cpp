#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemD";
	EXTERNAL = "ARC072/D";
}

TEST(abc059_problemD, case1) {
	check(string("") + "2 1", string("") + "Brown");
}

TEST(abc059_problemD, case2) {
	check(string("") + "5 0", string("") + "Alice");
}

TEST(abc059_problemD, case3) {
	check(string("") + "0 0", string("") + "Brown");
}

TEST(abc059_problemD, case4) {
	check(string("") + "4 8", string("") + "Alice");
}
