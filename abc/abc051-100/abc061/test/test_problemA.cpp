#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc061_problemA, case1) {
	check(string("") + "1 3 2", string("") + "Yes");
}

TEST(abc061_problemA, case2) {
	check(string("") + "6 5 4", string("") + "No");
}

TEST(abc061_problemA, case3) {
	check(string("") + "2 2 2", string("") + "Yes");
}
