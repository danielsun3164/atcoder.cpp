#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc198/A";
}

TEST(abc198_problemA, case1) {
	check(string("") + "2", string("") + "1");
}

TEST(abc198_problemA, case2) {
	check(string("") + "1", string("") + "0");
}

TEST(abc198_problemA, case3) {
	check(string("") + "3", string("") + "2");
}
