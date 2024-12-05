#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc237/C";
}

TEST(abc237_problemC, case1) {
	check(string("") + "kasaka", string("") + "Yes");
}

TEST(abc237_problemC, case2) {
	check(string("") + "atcoder", string("") + "No");
}

TEST(abc237_problemC, case3) {
	check(string("") + "php", string("") + "Yes");
}
