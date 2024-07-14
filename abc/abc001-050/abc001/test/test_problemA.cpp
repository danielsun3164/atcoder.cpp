#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc001_problemA, case1) {
	check(string("") + "15\n" + "10", string("") + "5");
}

TEST(abc001_problemA, case2) {
	check(string("") + "0\n" + "0", string("") + "0");
}

TEST(abc001_problemA, case3) {
	check(string("") + "5\n" + "20", string("") + "-15");
}
