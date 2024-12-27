#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc217/A";
}

TEST(abc217_problemA, case1) {
	check(string("") + "abc atcoder", string("") + "Yes");
}

TEST(abc217_problemA, case2) {
	check(string("") + "arc agc", string("") + "No");
}

TEST(abc217_problemA, case3) {
	check(string("") + "a aa", string("") + "Yes");
}
