#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemC";
	EXTERNAL = "abc239/C";
}

TEST(abc239_problemC, case1) {
	check(string("") + "0 0 3 3", string("") + "Yes");
}

TEST(abc239_problemC, case2) {
	check(string("") + "0 1 2 3", string("") + "No");
}

TEST(abc239_problemC, case3) {
	check(string("") + "1000000000 1000000000 999999999 999999999", string("") + "Yes");
}
