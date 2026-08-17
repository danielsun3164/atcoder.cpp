#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC057/A";
}

TEST(abc057_problemA, case1) {
	check(string("") + "9 12", string("") + "21");
}

TEST(abc057_problemA, case2) {
	check(string("") + "19 0", string("") + "19");
}

TEST(abc057_problemA, case3) {
	check(string("") + "23 2", string("") + "1");
}
