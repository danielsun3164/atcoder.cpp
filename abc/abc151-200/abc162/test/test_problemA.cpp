#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC162/A";
}

TEST(abc162_problemA, case1) {
	check(string("") + "117", string("") + "Yes");
}

TEST(abc162_problemA, case2) {
	check(string("") + "123", string("") + "No");
}

TEST(abc162_problemA, case3) {
	check(string("") + "777", string("") + "Yes");
}
