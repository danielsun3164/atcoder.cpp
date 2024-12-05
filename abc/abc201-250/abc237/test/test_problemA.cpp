#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc237/A";
}

TEST(abc237_problemA, case1) {
	check(string("") + "10", string("") + "Yes");
}

TEST(abc237_problemA, case2) {
	check(string("") + "-9876543210", string("") + "No");
}

TEST(abc237_problemA, case3) {
	check(string("") + "483597848400000", string("") + "No");
}
