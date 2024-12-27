#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC190/A";
}

TEST(abc190_problemA, case1) {
	check(string("") + "2 1 0", string("") + "Takahashi");
}

TEST(abc190_problemA, case2) {
	check(string("") + "2 2 0", string("") + "Aoki");
}

TEST(abc190_problemA, case3) {
	check(string("") + "2 2 1", string("") + "Takahashi");
}
