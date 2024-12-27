#include <bits/stdc++.h>
#include <command.h>
#include <gtest/gtest.h>

using namespace std;

static_block {
	COMMAND = "problemA";
}

TEST(abc039_problemA, case1) {
	check(string("") + "2 3 4", string("") + "52");
}

TEST(abc039_problemA, case2) {
	check(string("") + "3 4 2", string("") + "52");
}

TEST(abc039_problemA, case3) {
	check(string("") + "100 100 100", string("") + "60000");
}

TEST(abc039_problemA, case4) {
	check(string("") + "1 1 1", string("") + "6");
}
