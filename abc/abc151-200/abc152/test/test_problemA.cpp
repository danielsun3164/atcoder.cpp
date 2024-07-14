#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "ABC152/A";
}

TEST(abc152_problemA, case1) {
	check(string("") + "3 3", string("") + "Yes");
}

TEST(abc152_problemA, case2) {
	check(string("") + "3 2", string("") + "No");
}

TEST(abc152_problemA, case3) {
	check(string("") + "1 1", string("") + "Yes");
}
