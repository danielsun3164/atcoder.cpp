#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC054/A";
}

TEST(abc054_problemA, case1) {
	check(string("") + "8 6", string("") + "Alice");
}

TEST(abc054_problemA, case2) {
	check(string("") + "1 1", string("") + "Draw");
}

TEST(abc054_problemA, case3) {
	check(string("") + "13 1", string("") + "Bob");
}
