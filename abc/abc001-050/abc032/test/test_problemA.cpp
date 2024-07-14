#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc032_problemA, case1) {
	check(string("") + "2\n" + "3\n" + "8", string("") + "12");
}

TEST(abc032_problemA, case2) {
	check(string("") + "2\n" + "2\n" + "2", string("") + "2");
}

TEST(abc032_problemA, case3) {
	check(string("") + "12\n" + "8\n" + "25", string("") + "48");
}
