#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>
using namespace std;

static_block {
	COMMAND = "problemA";
	EXTERNAL = "abc234/A";
}

TEST(abc234_problemA, case1) {
	check(string("") + "0", string("") + "1371");
}

TEST(abc234_problemA, case2) {
	check(string("") + "3", string("") + "722502");
}

TEST(abc234_problemA, case3) {
	check(string("") + "10", string("") + "1111355571");
}
