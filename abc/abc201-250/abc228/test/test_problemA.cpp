#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc228/A";
}

TEST(abc228_problemA, case1) {
	check(string("") + "7 20 12", string("") + "Yes");
}

TEST(abc228_problemA, case2) {
	check(string("") + "20 7 12", string("") + "No");
}

TEST(abc228_problemA, case3) {
	check(string("") + "23 0 23", string("") + "Yes");
}
